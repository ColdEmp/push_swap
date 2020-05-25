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

void    sort_b(t_stack **stack)
{
    int len;
    int bound;
    

    len = list_size((*stack)->a);
    bound = len/2;
    while (is_range_in((*stack)->a, -1, bound))
    {
        if ((*stack)->a->nbr < bound)
            pb_wo(stack);
        ra_wo(stack);
    }
    bound--;
    while (bound > -1)
    {
        if (find_route((*stack)->b, bound) < 0)
        {
            while ((*stack)->b->nbr != bound)
                rrb_wo(stack);
        }
        else
        {
            while ((*stack)->b->nbr != bound)
                rb_wo(stack);
        }
        pa_wo(stack);
        bound--;
    }
    bound = len/2;
    while ((*stack)->a->nbr < len/2)
        ra_wo(stack);
    while ((*stack)->a->nbr != 0)
        pb_wo(stack);
    len--;
    while (len > bound -1)
    {
        if (find_route((*stack)->b, len) < 0)
        {
            while ((*stack)->b->nbr != len)
                rrb_wo(stack);
        }
        else
        {
            while ((*stack)->b->nbr != len)
                rb_wo(stack);
        }
        pa_wo(stack);
        len--;
    }
    while ((*stack)->a->nbr != 0)
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
}

void    sort(t_stack **stack)
{
    sort_b(stack);
    //print_stack(*stack);
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
