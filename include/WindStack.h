#ifndef WIND_STACk_H
#define WIND_STACk_H

#include "WindObject.h"
#include "Instruction.h"
#include <stdlib.h>


#define WindStack_INIT(name, length) \
        WindStack name; \
        name.begin = malloc(sizeof(StackNode) * length); \
        name.mark = begin; \
        name.end = name.begin + length;

typedef struct
{
        WindObject* obj;
        Instruction ins;
} StackNode;

/** NodeState
 * - Keeps track of if the node still needs to evaluate, or is done and ready to
 * move back or finish entire program process
 *
 */
typedef enum
{
        NodeState_Running,
        NodeState_Done
}NodeState;


typedef struct
{
        StackNode* begin;
        StackNode* mark;
        StackNode* end;
        NodeState state;
} WindStack;

#endif
