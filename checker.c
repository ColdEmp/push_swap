/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:02:49 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/19 19:16:15 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test(int *table, int len)
{
	int	i;

	i = 1;
	while (i < len)
	{
		if (table[i] < table[i - 1])
			return (0);
		i++;
	}
	return (1);
}

int	checker(char **array)
{
	int	i;
	int	len;
	int	*table;

	len = 0;
	i = 0;
	while (array[len] != '\0')
		len++;
	if (!(table = (int*)malloc(sizeof(int) * len)))
		return (-1);
	while (array[i] != '\0')
	{
		if ((table[i] = ft_atoi(array[i])) == (int)NULL)
			return (-1);
		i++;
	}
	if (len == 1)
		return (1);
	if (!test(table, len))
		return (0);
	return (1);
}

int	test_ilist(t_ilist *head)
{
	t_ilist *temp;

	temp = head;
	while (temp->next)
	{
		if (temp->nbr > (temp->next)->nbr)
			return (0);
		temp = temp->next;
	}
	return (1);
}

t_ilist	*ilstnew(int nbr)
{
	t_ilist *temp;

	if (!(temp = (t_ilist*)malloc(sizeof(t_ilist))))
		return (NULL);
	if (!(temp->nbr = (int)malloc(sizeof(int))))
		return(NULL);
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
			if (ft_isdigit(array[i][j]) != 1)
				error_exit;
			j++;
		}
		i++;
	}
}

int	check_ilist(char **array)
{
	t_ilist	*head;
	t_ilist	*temp;
	int		i;

	i = 0;
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
	if (!test_ilist(head))
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	char	**array;

	if (argc > 1)
	{
		if (argc == 2)
		{
			array = ft_strsplit(argv[1], ' ');
			if (check_ilist(array) == 1)
				ft_putstr("OK\n");
			else
				ft_putstr("KO\n");
		}
		else
		{
			if (check_ilist(argv + 1) == 1)
				ft_putstr("OK\n");
			else
				ft_putstr("KO\n");
		}
	}
	return (0);
}
