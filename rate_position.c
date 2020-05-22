#include "push_swap.h"

int rate_position(t_ilist *list, int number)
{
    t_ilist *temp;
    int     rating;

    rating = 0;
    temp = list;
    while (temp)
    {
        if (number > temp->nbr)
            rating++;
        temp = temp->next;
    }
    return (rating);
}
// rating:
// zero means it should be first
// compare it to list size to see where in the list it should be
// returns position counting from 0 where it should be