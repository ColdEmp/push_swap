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
	if (ft_strcmp("sa", cmd) == 0)
		sa(stack);
	else if (ft_strcmp("sb", cmd) == 0)
		sb(stack);
	else if (ft_strcmp("ss", cmd) == 0)
		ss(stack);
	else if (ft_strcmp("pa", cmd) == 0)
		pa(stack);
	else if (ft_strcmp("pb", cmd) == 0)
		pb(stack);
	else if (ft_strcmp("ra", cmd) == 0)
		ra(stack);
	else if (ft_strcmp("rb", cmd) == 0)
		rb(stack);
	else if (ft_strcmp("rr", cmd) == 0)
		rr(stack);
	else if (ft_strcmp("rra", cmd) == 0)
		rra(stack);
	else if (ft_strcmp("rrb", cmd) == 0)
		rrb(stack);
	else if (ft_strcmp("rrr", cmd) == 0)
		rrr(stack);
	else
		error(); // line 24
}

void read_cmd(t_stack **stack)
{
	char *cmd;

	while (get_next_line(0, &cmd) > 0) // !!! on mac it was: while (get_next_line(1, &cmd) > 0) !!!
	{
		do_cmd(&*stack, cmd);
		free(cmd);
		cmd = NULL;
	}
}
