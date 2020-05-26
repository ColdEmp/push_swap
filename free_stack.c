#include "push_swap.h"

void    free_stack(t_stack **stack)
{
    t_ilist *temp1;
    t_ilist *temp2;

    temp1 = (*stack)->b;
    while (temp1)
    {
        temp2 = temp1->next;
        free(temp1);
        temp1 = temp2;
    }
    temp1 = (*stack)->a;
    free(*stack);
    while (temp1)
    {
        temp2 = temp1->next;
        free(temp1);
        temp1 = temp2;
    }
}