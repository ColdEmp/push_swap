/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 10:16:51 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/03 10:18:04 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error(void)
{
	ft_putstr_fd("Error\n", 2); // : an instruction doesn't exist and/or is incorrectly formatted
	exit(1);
}

void do_cmd(t_stack **stack, char *cmd)
{
	if (strcmp("sa", cmd) == 0)
		sa(&*stack);
	else if (strcmp("sb", cmd) == 0)
		sb(&*stack);
	else if (strcmp("ss", cmd) == 0)
		ss(&*stack);
	else if (strcmp("pa", cmd) == 0)
		pa(&*stack);
	else if (strcmp("pb", cmd) == 0)
		pb(&*stack);
	else if (strcmp("ra", cmd) == 0)
		ra(&*stack);
	else if (strcmp("rb", cmd) == 0)
		rb(&*stack);
	else if (strcmp("rr", cmd) == 0)
		rr(&*stack);
	else if (strcmp("rra", cmd) == 0)
		rra(&*stack);
	else if (strcmp("rrb", cmd) == 0)
		rrb(&*stack);
	else if (strcmp("rrr", cmd) == 0)
		rrr(&*stack);
	else
		error(); // line 24
}

void read_cmd(t_stack **stack)
{
	char *cmd;

	// print_stack(*stack);
	while (get_next_line(0, &cmd) > 0) // !!! on mac it was: while (get_next_line(1, &cmd) > 0) !!!
	{
		// ft_putendl(cmd);
		do_cmd(&*stack, cmd);
		// print_stack(*stack);
	}
}
