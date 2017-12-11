#ifndef WIND_OBJECT_H
#define WIND_OBJECT_H
// contains windobject definition


typedef enum
{
        WindType_None,
        WindType_Int,
        WindType_Add,
        WindType_Sub
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
