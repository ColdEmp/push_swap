#include "push_swap.h"

void    check_bottom(t_stack **stack)
{
    t_ilist	*pointa;
    t_ilist *pointb;
    t_ilist *enda;
    t_ilist *endb;

	pointa = (*stack)->a;
    enda = pointa;
    while (enda && enda->next)
        enda = enda->next;
    pointb = (*stack)->b;
    endb = pointb;
    while (endb && endb->next)
        endb = endb->next;
    // if (pointa && pointa->nbr != enda->nbr && pointb && pointb->nbr != endb->nbr && (pointa->nbr > 
    //         enda->nbr) && (pointb->nbr < pointb->next->nbr))
    //     ;
    if (pointa && pointa->nbr != enda->nbr && (pointa->nbr > enda->nbr))
		rra_wo(&*stack);//a, if the bottom number is smaller than the top, move the bottom to the top
    if (pointb && pointb->nbr != endb->nbr && (pointb->nbr < endb->nbr))
        rb_wo(&*stack);//b, if the top number is smaller than the bottom, move the top to the bottom
}