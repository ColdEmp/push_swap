/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:02:38 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/03 15:06:56 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_list(t_ilist *list)
{
	t_ilist *temp;

	temp = list;
	while (temp->next)
	{
		if (temp->nbr > (temp->next)->nbr)
			return (0);
		temp = temp->next;
	}
	return (1);
}
