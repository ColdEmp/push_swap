/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_a_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:08:10 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/04 15:51:50 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_a_sorted(t_stack *stack)
{
	t_ilist *temp;
	int		step;

	step = 0;
	if (stack->a)
	{
		temp = stack->a;
		while (temp->next)
		{
			if (temp->nbr > (temp->next)->nbr)
				step++;
			if (step > 1)
				return (0);
			temp = temp->next;
		}
	}
	return (1);
}
