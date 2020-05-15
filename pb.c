/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:36:15 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 14:44:12 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **stack)
{
	t_ilist	*anode_1;

	if ((anode_1 = (*stack)->a) == NULL)
		return ;
	(*stack)->a = ((*stack)->a)->next;
	anode_1->next = (*stack)->b;
	(*stack)->b = anode_1;
}

void	pb_wo(t_stack **stack)
{
	ft_putendl("pb");
	pb(&*stack);
}
