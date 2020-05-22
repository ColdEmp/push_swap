#include "push_swap.h"

int current_position(t_ilist *list)
{
    int     i;
    t_ilist *temp;

    temp = list;
    while (temp->next)
        temp = temp->next;
    i = 0;
    if (temp->nbr > list->nbr)
        return (i);
    temp = list;
    i = 1;
    while (temp->next)
    {
        if (temp->nbr < temp->next->nbr)
            i++;
        else
            i = 1;
        temp = temp->next;
    }
    return (i);
}

// 0 means is is the start of the list
// > 0 means that there are that many numbers before this one (counting from 0 is gives the position)