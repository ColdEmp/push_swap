#include "push_swap.h"

int is_range_in(t_ilist *list, int start, int end)
{
    int i;

    i = start;
    while (i <= end)
    {
        if (is_num_in(list, i) == 1)
            return (1);
        i++;
    }
    return (0);
}