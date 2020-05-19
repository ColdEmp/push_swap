#include "push_swap.h"

void    index_list(t_stack **stack, int *array, int len)
{
    int     i;
    int     c;
    t_ilist *a;

    a = (*stack)->a;
    while (a)
    {
        i = 0;
        c = 0;
        while (i < len)
        {
            if (array[i] < a->nbr)
                c++;
            i++;
        }
        a->nbr = c;
        a = a->next;
    }
}
