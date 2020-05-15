#include "push_swap.h"

int rate_position(t_stack **stack, int number, int side)
{
    t_ilist *point;
    int     rating;

    if (side == 1)
        point = (*stack)->a;
    else if (side == 2)
        point = (*stack)->b;
    rating = 0;
    while (point)
    {
        if (point->nbr > number)
            rating++;
        else if (point->nbr < number)
            rating--;
        point = point->next;
    }
    return (rating);
}
// large positive number means it is in the right place be at the bottom
// large negative number means it should be near the top
//close to zero

//if used to figure the direction to rotate
// < 0 (-) means more numbers smaller than the number, so move bottom to top
// > 0 (+) means more numbers larger than the number, so move top to bottom
// 0 means the same distance, so it doesn't matter