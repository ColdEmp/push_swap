/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:36:38 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/12 17:36:15 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack **stack)
{
	while (test_stack(*stack) != 1)
	{
		while (test_a_sorted(*stack) != 1)
			shift_right(&*stack);
		while (test_b_sorted(*stack) != 1)
			shift_left(&*stack);
	}
}

void	medium_sort(t_stack **stack)
{
	t_ilist	*heada;
	t_ilist *headb;

	while ((test_a_sorted(*stack) != 1) && (test_b_sorted(*stack) != 1))
	{
		heada = (*stack)->a;
		while (heada)
		{
			if (heada->next && (heada->nbr > (heada->next)->nbr))
				sa(&*stack);
			pb(&*stack);
			heada = (*stack)->a;
		}
		headb = (*stack)->b;
		while (headb)
		{
			if (headb->next && (headb->nbr < (headb->next)->nbr))
				sb(&*stack);
			pa(&*stack);
			headb = (*stack)->b;
		}
	}
}

void	initial_sort(t_stack **stack)
{
	// int size;

	// size = list_size(*stack);
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
			stack = populate_stack(array);
		}
		else
			stack = populate_stack(argv + 1);
		initial_sort(&stack);
		print_stack(stack);
	}
	return (0);
}
