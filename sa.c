/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:56:46 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 14:43:37 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack)
{
	t_ilist	*node_1;
	t_ilist	*node_2;

	if ((node_1 = (*stack)->a) == NULL)
		return ;
	if ((node_2 = node_1->next) == NULL)
		return ;
	node_1->next = node_2->next;
	node_2->next = node_1;
	(*stack)->a = node_2;
}

void	sa_wo(t_stack **stack)
{
	sa(&*stack);
	ft_putendl("sa");
}
