/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:02:49 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/15 17:58:40 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

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

t_list	*createList(char **array)
{
	T-list	*temp;

	if (array[0] != '\0')
		temp = ft_lstnew(ft_atoi(array[0]),sizeof(int));
	return (
}

int	main(int argc, char *argv[])
{
	char	**array;

	if (argc > 1)
	{
		if (argc == 2)
		{
			array = ft_strsplit(argv[1], ' ');
			if (checker(array) == -1)
				ft_putstr("ERROR\n");
			else if (checker(array) == 1)
				ft_putstr("OK\n");
			else
				ft_putstr("KO\n");
		}
		else
		{
			if (checker(argv + 1) == -1)
				ft_putstr("ERROR\n");
			else if (checker(argv + 1) == 1)
				ft_putstr("OK\n");
			else
				ft_putstr("KO\n");
		}
	}
	return (0);
}
