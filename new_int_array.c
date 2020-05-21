#include "push_swap.h"

int *new_int_array(char **array, int len)
{
    int i;
    int *int_array;

    if (!(int_array = (int*)malloc(sizeof(int) * (len))))
        return (NULL);
    i = 0;
    while (i < len)
    {
        int_array[i] = atoi(array[i]);
        i++;
    }
    return (int_array);
}