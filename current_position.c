#include "push_swap.h"

// not that good, use rate_position rater.
int current_position(t_ilist *list)
{
    int     i;
    t_ilist *temp;

    temp = list;
    i = 1;
    if (!list)
        return (0);
    while (temp->next)
        temp = temp->next;
    if (temp->nbr > list->nbr)
        return (i);
    temp = list;
    i = 1;
    while (temp->next)
    {
        if (temp->nbr < temp->next->nbr)
            i++;
        else
            i = 2;
        temp = temp->next;
    }
    return (i);
}

// 0 means there is no list
// 1 means is is the start of the list
// > 0 means that there are that many numbers before this one
// (counting from 0 it gives the position)