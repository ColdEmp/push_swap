/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:26:03 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 14:44:05 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack)
{
	t_ilist	*bnode_1;

	if ((bnode_1 = (*stack)->b) == NULL)
		return ;
	(*stack)->b = ((*stack)->b)->next;
	bnode_1->next = (*stack)->a;
	(*stack)->a = bnode_1;
}

void	pa_wo(t_stack **stack)
{
	pa(&*stack);
	ft_putendl("pa");
}
