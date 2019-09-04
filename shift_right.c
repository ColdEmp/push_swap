/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:21:29 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/04 15:41:39 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_right(t_stack **stack)
{
	t_ilist	*ta;

	ta = (*stack)->a;
	while (ta)
	{
		if (ta->next && (ta->nbr > (ta->next)->nbr))
		{
			sa(&*stack);
			ft_putendl("sa");
		}
		pb(&*stack);
		ft_putendl("pb");
		ta = (*stack)->a;
	}
}
