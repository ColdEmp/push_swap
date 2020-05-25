#include "push_swap.h"

int is_num_in(t_ilist *list, int number)
{
    t_ilist *temp;

    temp = list;
    while (temp)
    {
        if (temp->nbr == number)
            return (1);
        temp = temp->next;
    }
    return (0);
}

// returns 1 if found
// returns 0 if not found