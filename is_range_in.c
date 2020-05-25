#include "push_swap.h"

int is_range_in(t_ilist *list, int first, int second)
{
    int lower;
    int upper;

    if (second > first)
    {
        lower = first;
        upper = second;
    }
    else
    {
        lower = second;
        upper = first;
    }
    lower++;
    while (lower < upper)
    {
        if (is_num_in(list, lower) == 1)
            return (1);
        lower++;
    }
    return (0);
}