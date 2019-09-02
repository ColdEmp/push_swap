/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:36:38 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/02 08:59:40 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	sort(t_stack **stack)
{
	
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
	sort(&stack);
	ft_putchar('\n');
	temp = stack->a;
	while (temp)
	{
		ft_putendl(ft_itoa(temp->nbr));
		temp = temp->next;
	}
}

int	main(int argc, char *argv[])
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
	return (0);}
