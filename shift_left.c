/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:31:28 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/12 17:37:38 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_left(t_stack **stack)
{
	t_ilist *headb;

	headb = (*stack)->b;
	if (headb->next && (headb->nbr < headb->next->nbr))
	{
		sb(&*stack);
		ft_putendl("sb");
	}
	if (test_b_sorted(*stack) != 1)
	{
		pa(&*stack);
		ft_putendl("pa");
	}
}
