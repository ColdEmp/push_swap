/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:16:39 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/04 15:20:51 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		list_size(t_stack *stack)
{
	int		i;
	t_ilist	*temp;

	i = 0;
	temp = stack->a;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
