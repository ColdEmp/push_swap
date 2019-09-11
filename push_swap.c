/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:36:38 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/11 15:41:29 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack **stack)
{
	while (test_stack(*stack) != 1)
	{
			shift_right(&*stack);
			shift_left(&*stack);
	}
}

void	medium_sort(t_stack **stack)
{
	t_ilist	*ta;
	t_ilist *tb;

	while ((test_a(*stack) != 1) && (test_b(*stack) != 1))
	{
		ta = (*stack)->a;
		while (ta)
		{
			if (ta->next && (ta->nbr > (ta->next)->nbr))
				sa(&*stack);
			pb(&*stack);
			ta = (*stack)->a;
		}
		tb = (*stack)->b;
		while (tb)
		{
			if (tb->next && (tb->nbr < (tb->next)->nbr))
				sb(&*stack);
			pa(&*stack);
			tb = (*stack)->b;
		}
	}
}

void	ini_sort(t_stack **stack)
{
	int size;

	size = list_size(*stack);
	//if (size <= 5)
		small_sort(&*stack);
	//else
	//	medium_sort(&*stack);
}

int		main(int argc, char *argv[])
{
	char	**array;
	t_stack *stack;

	if (argc > 1)
	{
		if (argc == 2)
		{
			array = ft_strsplit(argv[1], ' ');
			stack = pop_stack(array);
		}
		else
			stack = pop_stack(argv + 1);
		ini_sort(&stack);
		print_stack(stack);
	}
	return (0);
}
