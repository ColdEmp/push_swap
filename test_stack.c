/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 10:18:32 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/03 12:42:52 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_stack(t_stack *stack)
{
	t_ilist *temp;

	temp = stack->a;
	if (stack->b != NULL)
		return (-1);
	while (temp->next)
	{
		if (temp->nbr > (temp->next)->nbr)
			return (0);
		temp = temp->next;
	}
	return (1);
}
