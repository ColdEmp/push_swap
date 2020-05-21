/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacknew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 16:08:50 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 15:31:34 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stacknew(void)
{
	t_stack *temp;

	if (!(temp = (t_stack*)malloc(sizeof(t_stack))))
		return (NULL);
	// free(temp->a->next);
	// free(&(temp->a->nbr));
	// free(temp->b->next);
	// free(&(temp->b->nbr));
	temp->a = NULL;
	temp->b = NULL;
	return (temp);
}
