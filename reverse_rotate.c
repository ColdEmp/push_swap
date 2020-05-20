#include "push_swap.h"

void    reverse_rotate(t_stack **stack) //rra, down
{
    t_ilist *pointb;
    t_ilist *enda;

    pointb = (*stack)->b;
    while (1)
    {
        enda = (*stack)->a;
        while (enda->next)
            enda = enda->next;
        if (pointb->nbr < enda->nbr)
            rra_wo(&*stack);
        else
            break;
    }
}
