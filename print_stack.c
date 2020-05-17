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
	t_ilist	*tempa;
	t_ilist	*tempb;

	tempa = stack->a;
	tempb = stack->b;
	system("clear");
	ft_putendl("a\t\tb");
	ft_putendl("-\t\t-");
	while (tempa || tempb)
	{
		if (tempa)
		{
			ft_putstr(ft_itoa(tempa->nbr));
			tempa = tempa->next;
		}
		ft_putstr("\t\t");
		if (tempb)
		{
			ft_putstr(ft_itoa(tempb->nbr));
			tempb = tempb->next;
		}
		ft_putstr("\n");
	}
}
