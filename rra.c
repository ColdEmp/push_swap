/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 13:51:25 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 14:44:53 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack)
{
	t_ilist *node_1;
	t_ilist *node_2;

	if ((node_1 = (*stack)->a) == NULL)
		return ;
	if ((node_2 = node_1->next) == NULL)
		return ;
	while (node_2->next)
	{
		node_1 = node_2;
		node_2 = node_2->next;
	}
	node_1->next = NULL;
	node_2->next = (*stack)->a;
	(*stack)->a = node_2;
}

void	rra_wo(t_stack **stack)
{
	ft_putendl("rra");
	rra(&*stack);
}
