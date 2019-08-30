/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:02:49 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 16:59:49 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_stack(t_stack *stack)
{
	t_ilist *temp;

	temp = stack->a;
	if (stack->b != NULL)
		ERROR_EXIT;
	while (temp->next)
	{
		if (temp->nbr > (temp->next)->nbr)
			KO;
		temp = temp->next;
	}
	OK;
}

void	do_cmd(t_stack **stack, char *cmd)
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
		ERROR_EXIT;
}

void	read_cmd(t_stack **stack)
{
	char	*cmd;

	while (get_next_line(1, &cmd))
		do_cmd(&*stack, cmd);
}

void	pop_intlst(char **array)
{
	t_stack	*stack;
	t_ilist	*temp;
	int		i;

	check_errors(array);
	stack = stacknew();
	stack->a = intlstnew(ft_atoi(array[0]));
	temp = stack->a;
	i = 1;
	while (array[i])
	{
		temp->next = intlstnew(ft_atoi(array[i]));
		temp = temp->next;
		i++;
	}
	read_cmd(&stack);
	ft_putchar('\n');
	temp = stack->a;
	while (temp)
	{
		ft_putendl(ft_itoa(temp->nbr));
		temp = temp->next;
	}
	test_stack(stack);
}

int		main(int argc, char *argv[])
{
	char	**array;

	if (argc > 1)
	{
		if (argc == 2)
		{
			array = ft_strsplit(argv[1], ' ');
			pop_intlst(array);
		}
		else
			pop_intlst(argv + 1);
	}
	return (0);
}
