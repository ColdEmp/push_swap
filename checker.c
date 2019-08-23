/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:02:49 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/23 16:59:16 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_intlist(t_ilist *head)
{
	t_ilist *temp;

	temp = head;
	while (temp->next)
	{
		if (temp->nbr > (temp->next)->nbr)
			KO;
		temp = temp->next;
	}
	OK;
}

void	pop_intlst(char **array)
{
	t_ilist	*head;
	t_ilist	*temp;
	int		i;

	check_errors(array);
	head = intlstnew(ft_atoi(array[0]));
	temp = head;
	i = 1;
	while (array[i])
	{
		temp->next = intlstnew(ft_atoi(array[i]));
		temp = temp->next;
		i++;
	}
	test_intlist(head);
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
