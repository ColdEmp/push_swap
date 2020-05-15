#include "push_swap.h"

void initial_sort(t_stack **stack)
{
    int dir;

    dir = 2;
    while ((test_a_sorted(*stack) != 1) || (test_b_sorted(*stack) != 1))
    {
        if (dir == 2) // to the right
        {
            shift_right(&*stack);
            if (test_a_sorted(*stack) == 1)
                dir--;
        }
        else if (dir == 1) // to the left
        {
            shift_left(&*stack);
            if (test_b_sorted(*stack) == 1)
                dir++;
        }
    }
}

void rotate(t_stack **stack) //ra, up
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

void reverse_rotate(t_stack **stack) //rra, down
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

void sort(t_stack **stack)
{
    initial_sort(&*stack);
    if ((*stack)->b == NULL)
        return;
    if (rate_position(&*stack, (*stack)->b->nbr, 1) >= 0) //move bottom to top
        rotate(&*stack);
    else
        reverse_rotate(&*stack);
    while (test_stack(*stack) != 1)
        merge(&*stack);
}