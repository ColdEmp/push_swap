#include "push_swap.h"

void    final_rotate(t_stack **stack)
{
    if (find_route((*stack)->a, 0) < 0)
    {
        while ((*stack)->a->nbr != 0)
            rra_wo(stack);
    }
    else
    {
        while ((*stack)->a->nbr != 0)
            ra_wo(stack);
    }
}