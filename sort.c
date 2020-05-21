#include "push_swap.h"

void    sort_a(t_stack **stack)
{
    t_ilist *enda;

    while (test_a_sorted(*stack) != 1)
    {
        if ((*stack)->a && (*stack)->a->next && (*stack)->a->nbr > (*stack)->a->next->nbr)
        {
            sa_wo(&*stack);
            enda = (*stack)->a;
            while (enda->next)
                enda = enda->next;
            if ((*stack)->a->next->nbr > enda->nbr && (*stack)->a->nbr < enda->nbr)
                pb_wo(&*stack);
            else if (test_a_sorted(*stack) != 1)
                ra_wo(&*stack);
        }
        else
            ra_wo(&*stack);
    }
}

void    sort(t_stack **stack)
{
    sort_a(stack);
    while (test_stack(*stack) != 1)
        merge(&*stack);
    // print_stack(*stack);
}

    // sort_right_left(&*stack);
    // if ((*stack)->b == NULL)
    //     return;
    // if (rate_position(&*stack, (*stack)->b->nbr, 1) >= 0) //move bottom to top
    //     rotate(&*stack);
    // else
    //     reverse_rotate(&*stack);
    // while (test_stack(*stack) != 1)
    //     merge(&*stack);
