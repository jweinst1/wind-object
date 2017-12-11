#ifndef WIND_STACk_H
#define WIND_STACk_H

#include "WindObject.h"

typedef struct
{
        WindObject* begin;
        WindObject* mark;
        WindObject* end;
} WindStack;

#endif
