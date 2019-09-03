/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 10:13:25 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/03 10:23:47 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*pop_stack(char **array)
{
	t_stack	*stack;
	t_ilist	*temp;
	int		i;

	check_errors(array);
	stack = stacknew();
	stack->a = intlstnew(ft_atoi(array[0]));
	temp = stack->a;
	i = 1;
	while (array[i])
	{
		temp->next = intlstnew(ft_atoi(array[i]));
		temp = temp->next;
		i++;
	}
	return (stack);
}
