#ifndef WIND_OBJECT_H
#define WIND_OBJECT_H
// contains windobject definition

#define WindObject_INT(wobj, num) do { \
                wobj->type = WindType_Int; \
                wobj->value._int = num; \
} while(0)

typedef struct
{
        char* begin;
        char* end;
} WindStr;

typedef enum
{
        WindType_None,
        WindType_Int
} WindType;

typedef union
{
        int _int;
        WindStr* _str;
        struct WindList* _lst;

} WindValue;

typedef struct
{
        WindValue value;
        WindType type : 8;
} WindObject;

typedef struct
{
        WindObject* begin;
        WindObject* mark;
        WindObject* end;
} WindList;

#endif
