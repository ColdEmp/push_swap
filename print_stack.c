/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 10:34:03 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/03 10:40:17 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	t_ilist	*temp;

	temp = stack->a;
	while (temp)
	{
		ft_putendl(ft_itoa(temp->nbr));
		temp = temp->next;
	}
}
