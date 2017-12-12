#ifndef WIND_STACk_H
#define WIND_STACk_H

#include "WindObject.h"
#include "Instruction.h"
#include <stdlib.h>


#define WindStack_INIT(name, length) \
        WindStack name; \
        name.begin = malloc(sizeof(StackNode) * length); \
        name.mark = name.begin; \
        name.end = name.begin + length;


#define WindStack_LOAD(wstack, wobj, ins) do { \
                wstack->mark->obj = wobj; \
                wstack->mark.ins = ins; \
} while(0)

#define WindStack_LOAD_AT(wstack, wobj, ins, index) do { \
                (wstack->mark + index)->obj = wobj; \
                (wstack->mark + index).ins = ins; \
} while(0)

#define WindStack_MOVE_N(wstack) wstack.mark++

#define WindStack_MOVE_P(wstack) wstack.mark--

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
        WindObject* obj;
        WindInstruc ins;
        NodeState state;
} StackNode;


typedef struct
{
        StackNode* begin;
        StackNode* mark;
        StackNode* end;
} WindStack;


void WindObject_make_int(WindObject* wobj, int num);

#endif
