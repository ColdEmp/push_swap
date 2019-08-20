/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:02:49 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/20 13:54:18 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_ilist(t_ilist *head)
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

t_ilist	*ilstnew(int nbr)
{
	t_ilist *temp;

	if (!(temp = (t_ilist*)malloc(sizeof(t_ilist))))
		return (NULL);
	if (!(temp->nbr = (int)malloc(sizeof(int))))
		return (NULL);
	temp->nbr = nbr;
	temp->next = NULL;
	return (temp);
}

void	check_error(char **array)
{
	int	i;
	int	j;

	i = 0;
	while (array[i])
	{
		j = 0;
		while (array[i][j])
		{
			if ((j == 0 && ft_isdigit(array[i][j]) != 1 && array[i][j] != '-')
					|| (j == 0 && array[i][j] == '-' &&
					ft_isdigit(array[i][j + 1]) != 1)
					|| (j > 0 && ft_isdigit(array[i][j]) != 1))
				ERROR_EXIT;
			j++;
		}
		i++;
	}
}

void	check_ilist(char **array)
{
	t_ilist	*head;
	t_ilist	*temp;
	int		i;

	check_error(array);
	head = ilstnew(ft_atoi(array[0]));
	temp = head;
	i = 1;
	while (array[i])
	{
		temp->next = ilstnew(ft_atoi(array[i]));
		temp = temp->next;
		i++;
	}
	test_ilist(head);
}

int		main(int argc, char *argv[])
{
	char	**array;

	if (argc > 1)
	{
		if (argc == 2)
		{
			array = ft_strsplit(argv[1], ' ');
			check_ilist(array);
		}
		else
			check_ilist(argv + 1);
	}
	return (0);
}
