#include "push_swap.h"

int find_smallest(t_stack *stack)
{
    t_ilist *a;
    int     len;
    int     i;

    a = stack->a;
    len = list_size(stack);
    i = 0;
    while (a->nbr != 0)
    {
        a = a->next;
        i++;
    }
    if (len - i < i)
        return (i-len);
    return (i);
}

// return 0 if smallest is at the top
// possitive how many ra need to be done
// negative how many rra need be done

// 1
// 2 
// 3
// 4 - 0
// 5

// i = 3
// len = 5
// len - 3 = 2