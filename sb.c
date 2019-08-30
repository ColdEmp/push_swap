/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:14:52 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 14:43:48 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack **stack)
{
	t_ilist	*node_1;
	t_ilist	*node_2;

	if ((node_1 = (*stack)->b) == NULL)
		return ;
	if ((node_2 = node_1->next) == NULL)
		return ;
	node_1->next = node_2->next;
	node_2->next = node_1;
	(*stack)->b = node_2;
}
