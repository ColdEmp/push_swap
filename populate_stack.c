/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 10:13:25 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/03 10:23:47 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*populate_stack(char **array)
{
	t_stack	*stack;
	t_ilist	*temp;
	int		len;
	int		i;
	int		*int_array;

	check_errors(array);
	len = 0;
	while (array[len])
		len++;
	int_array = new_int_array(array, len);
	stack = stacknew();
	stack->a = ilistnew(int_array[0]);
	temp = stack->a;
	i = 1;
	while (i < len)
	{
		temp->next = ilistnew(int_array[i]);
		temp = temp->next;
		i++;
	}
	index_list(&stack, int_array, len);
	return (stack);
}
