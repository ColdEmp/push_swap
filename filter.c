#include "push_swap.h"

void    filter(t_stack **stack, int min, int max)
{
    while (is_range_in((*stack)->a, min, max))
    {
        if ((*stack)->a->nbr >= min && (*stack)->a->nbr <= max)
            pb_wo(stack);
        else
            ra_wo(stack);
    }
}