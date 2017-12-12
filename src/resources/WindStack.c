#include "WindStack.h"

void WindObject_make_int(WindObject* wobj, int num)
{
        wobj->value._int = num;
        wobj->type = WindType_Int;

}
