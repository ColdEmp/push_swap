#include "push_swap.h"

void    check_top(t_stack **stack)
{
    t_ilist	*pointa;
    t_ilist *pointb;

	pointa = (*stack)->a;
    pointb = (*stack)->b;
    if (pointa && pointa->next && pointb && pointb->next && (pointa->nbr > 
            pointa->next->nbr) && (pointb->nbr < pointb->next->nbr))
        ss_wo(&*stack);
    else if (pointa && pointa->next && (pointa->nbr > pointa->next->nbr))
		sa_wo(&*stack);
    else if (pointb && pointb->next && (pointb->nbr < pointb->next->nbr))
        sb_wo(&*stack);
}