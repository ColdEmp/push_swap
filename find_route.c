#include "push_swap.h"

int find_route(t_ilist *list, int nbr)
{
    t_ilist *temp;
    int     len;
    int     i;

    temp = list;
    len = list_size(list);
    i = 0;
    while (temp && temp->nbr != nbr)
    {
        temp = temp->next;
        i++;
    }
    if (len - i < i)
        return (i - len);
    return (i);
}

// give it a list and a number and it will give how many
// steps forward or backwards you must rotate