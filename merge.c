/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:42:09 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/16 15:59:11 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	merge(t_stack **stack, int min, int current)
{
	while (current >= min)
	{
		if (find_route((*stack)->b, current) < 0)
		{
			while ((*stack)->b->nbr != current)
				rrb_wo(stack);
		}
		else
		{
			while ((*stack)->b->nbr != current)
				rb_wo(stack);
		}
		pa_wo(stack);
		current--;
	}
}

//if ((*stack)->b->nbr < (*stack)->a->nbr && (*stack)->b->nbr < enda->nbr)
// else if ((*stack)->b->nbr > (*stack)->a->nbr)