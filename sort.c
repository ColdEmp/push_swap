#include "push_swap.h"

void sort_a(t_stack **stack)
{
    t_ilist *enda;

    while (test_a_sorted(*stack) != 1)
    {
        if ((*stack)->a && (*stack)->a->next && (*stack)->a->nbr > (*stack)->a->next->nbr)
        {
            sa_wo(&*stack);
            enda = (*stack)->a;
            while (enda && enda->next)
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

void sort_b(t_stack **stack)
{
    int len;

    len = list_size((*stack)->a);
    filter(stack, 0, len / 2 - 1);
    merge(stack, 0, len / 2 - 1);
    while ((*stack)->a->nbr < len / 2)
        ra_wo(stack);
    while ((*stack)->a->nbr != 0)
        pb_wo(stack);
    merge(stack, len / 2, len - 1);
    while ((*stack)->a->nbr != 0)
        ra_wo(stack);
}

void sort_c(t_stack **stack)
{
    int len;

    len = list_size((*stack)->a);
    filter(stack, 0, len / 4 - 1);
    merge(stack, 0, len / 4 - 1);
    while ((*stack)->a->nbr < len / 4)
        ra_wo(stack);
    filter(stack, len / 4, len / 2 - 1);
    while ((*stack)->a->nbr != 0)
        ra_wo(stack);
    while ((*stack)->a->nbr < len / 4)
        ra_wo(stack);
    merge(stack, len / 4, len / 2 - 1);
    while ((*stack)->a->nbr < len / 2 && (*stack)->a->nbr >= len / 4)
        ra_wo(stack);
    filter(stack, len / 2, len * 3 / 4 - 1);
    while ((*stack)->a->nbr != len / 2 - 1)
        rra_wo(stack);
    ra_wo(stack);
    // while ((*stack)->a->nbr != 0)
    //     ra_wo(stack);
    // while ((*stack)->a->nbr < len / 2)
    //     ra_wo(stack);
    merge(stack, len / 2, len * 3 / 4 - 1);
    while ((*stack)->a->nbr < len * 3 / 4 && (*stack)->a->nbr >= len / 2)
        ra_wo(stack);
    filter(stack, len * 3 / 4, len - 1);
    merge(stack, len * 3 / 4, len - 1);
    while ((*stack)->a->nbr < len && (*stack)->a->nbr >= len * 3 / 4)
        ra_wo(stack);
}


void sort(t_stack **stack)
{
    sort_c(stack);
    // print_stack(*stack);
}

// if ((*stack)->a && enda && (*stack)->a->nbr > enda->nbr)//((*stack)->b && (*stack)->a && (*stack)->b->nbr == ((*stack)->a->nbr - 1))
//         {
//             while (is_range_in((*stack)->b, enda->nbr, (*stack)->a->nbr))
//             {

//             }
//         }

// sort_right_left(&*stack);
// if ((*stack)->b == NULL)
//     return;
// if (rate_position(&*stack, (*stack)->b->nbr, 1) >= 0) //move bottom to top
//     rotate(&*stack);
// else
//     reverse_rotate(&*stack);
// while (test_stack(*stack) != 1)
//     merge(&*stack);
