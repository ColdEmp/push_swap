/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:42:09 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/16 15:59:11 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void merge(t_stack **stack)
{
	t_ilist *enda;

	enda = (*stack)->a;
	while (enda->next)
		enda = enda->next;
	if ( (*stack)->b && (*stack)->b->nbr < (*stack)->a->nbr &&
			( (*stack)->b->nbr > enda->nbr || (*stack)->a->nbr < enda->nbr ) )
		pa_wo(&*stack);
	else //if ((*stack)->b->nbr < (*stack)->a->nbr && (*stack)->b->nbr < enda->nbr)
		rra_wo(&*stack);
	// else if ((*stack)->b->nbr > (*stack)->a->nbr)
}
