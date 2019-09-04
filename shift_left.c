/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:31:28 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/04 15:40:14 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_left(t_stack **stack)
{
	t_ilist *tb;

	tb = (*stack)->b;
	while (tb)
	{
		if (tb->next && (tb->nbr < (tb->next)->nbr))
		{
			sb(&*stack);
			ft_putendl("sb");
		}
		pa(&*stack);
		ft_putendl("pa");
		tb = (*stack)->b;
	}
}
