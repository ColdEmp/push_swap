/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:08:25 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/04 15:51:48 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_b(t_stack *stack)
{
	t_ilist *temp;

	if (stack->b)
	{
		temp = stack->b;
		while (temp->next)
		{
			if (temp->nbr < (temp->next)->nbr)
				return (0);
			temp = temp->next;
		}
	}
	return (1);
}
