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

void	push_left(t_stack **stack)
{
	while ((*stack)->b)
	{
		pa(&*stack);
		ft_putendl("pa");
	}
}

void	merge(t_stack **stack)
{
	if ((*stack)->b->nbr < (*stack)->a->nbr)
		push_left(&*stack);
	while ((*stack)->b)
	{
		while ((*stack)->b->nbr !> (*stack)->a->nbr
			&& (*stack)->b->nbr !< (*stack)->a->next->nbr)
		{
			rra(&*stack);
			ft_putendl("rra");
		}
		pa(&*stack);
		ft_putendl("pa");
	}
}
