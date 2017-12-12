#include <stdio.h>
#include <stdlib.h>
#include "WindObject.h"
#include "WindStack.h"

int main(int argc, char const *argv[]) {
        WindStack_INIT(foo, 50);
        StackNode* cur = foo.mark;
        cur->ins = WindInstruc_Add;
        cur->state = NodeState_Running;
        cur->obj->type = WindType_Int;
        cur->obj->value._int = 5;
        return 0;
}
