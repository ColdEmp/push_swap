/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:31:28 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/11 13:39:42 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_left(t_stack **stack)
{
	t_ilist *tb;

	tb = (*stack)->b;
	while (test_b(*stack) != 1)
	{
		if (tb->next && (tb->nbr < (tb->next)->nbr))
		{
			sb(&*stack);
			ft_putendl("sb");
		}
		if (test_b(*stack) != 1)
		{
			pa(&*stack);
			ft_putendl("pa");
		}
		tb = (*stack)->b;
	}
}
