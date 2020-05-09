/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ilistnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 15:05:21 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/23 15:16:06 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ilist	*ilistnew(int nbr)
{
	t_ilist *temp;

	if (!(temp = (t_ilist*)malloc(sizeof(t_ilist))))
		return (NULL);
	if (!(temp->nbr = (int)malloc(sizeof(int))))
		return (NULL);
	temp->nbr = nbr;
	temp->next = NULL;
	return (temp);
}
