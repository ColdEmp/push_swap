#include "push_swap.h"

void    rotate(t_stack **stack) //ra, up
{
    t_ilist *pointb;
    t_ilist *pointa;

    pointb = (*stack)->b;
    while (1)
    {
        pointa = (*stack)->a;
        if (pointb->nbr > pointa->nbr)
            ra_wo(&*stack);
        else
            break;
    }
}
