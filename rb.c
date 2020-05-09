/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 13:46:16 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 14:44:38 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack **stack)
{
	t_ilist *node_1;
	t_ilist *node_2;

	if ((node_1 = (*stack)->b) == NULL)
		return ;
	if ((node_2 = node_1->next) == NULL)
		return ;
	(*stack)->b = node_2;
	while (node_2->next)
	{
		node_2 = node_2->next;
	}
	node_2->next = node_1;
	node_1->next = NULL;
}

void	rb_wo(t_stack **stack)
{
	rb(&*stack);
	ft_putendl("rb");
}
