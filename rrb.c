/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 13:59:20 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 14:45:58 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack **stack)
{
	t_ilist *node_1;
	t_ilist *node_2;

	if ((node_1 = (*stack)->b) == NULL)
		return ;
	if ((node_2 = node_1->next) == NULL)
		return ;
	while (node_2->next)
	{
		node_1 = node_2;
		node_2 = node_2->next;
	}
	node_1->next = NULL;
	node_2->next = (*stack)->b;
	(*stack)->b = node_2;
}

void	rrb_wo(t_stack **stack)
{
	rrb(&*stack);
	ft_putendl("rrb");
}
