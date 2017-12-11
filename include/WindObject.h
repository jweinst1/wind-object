#ifndef WIND_OBJECT_H
#define WIND_OBJECT_H
// contains windobject definition

#define WindObject_INT(wobj, num) do { \
                wobj->type = WindType_Int; \
                wobj->value._int = num; \
} while(0)

typedef enum
{
        WindType_None,
        WindType_Int,
        WindType_Add,
        WindType_Sub,
        WindType_ExpStart,
        WindType_ExpEnd
} WindType;

typedef union
{
        int _int;
} WindValue;

typedef struct
{
        WindValue value;
        WindType type;
} WindObject;

#endif
