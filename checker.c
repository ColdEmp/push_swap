/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:02:49 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/03 10:46:10 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char *argv[])
{
	char	**array;
	t_stack	*stack;

	if (argc > 1)
	{
		if (argc == 2)
		{
			array = ft_strsplit(argv[1], ' ');
			stack = populate_stack(array);
		}
		else
			stack = populate_stack(argv + 1);
		read_cmd(&stack);
		//print_stack(stack);
		if (test_stack(stack) == 0)
			ft_putendl("KO");
		else if (test_stack(stack) == 1)
			ft_putendl("OK");
	}
	return (0);
}
