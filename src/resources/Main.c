#include <stdio.h>
#include <stdlib.h>
#include "WindObject.h"

int main(int argc, char const *argv[]) {
        WindObject* stack = malloc(sizeof(WindObject) * 10);
        stack[0].type = WindType_Add;
        stack[1].type = WindType_ExpStart;

        return 0;
}
