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
			free(array);
		}
		else
			stack = populate_stack(argv + 1);
		sort(&stack);
		//print_stack(stack); // !!! comment out !!!
	}
	// char	**array2 = (char *[]){"1", "3", "2"};
	// t_stack *stack2 = populate_stack(array2);
	// sort(&stack2);
	free_stack(&stack);
	return (0);
}
