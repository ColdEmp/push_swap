#include "push_swap.h"

void sort_right_left(t_stack **stack)
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
