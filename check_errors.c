/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 16:51:26 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/03 10:54:48 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_int_size(char **array)
{
	int	i;
	long long max;
	long long min;

	max = 2147483647;
	min = -2147483648;
	i = 0;
	while (array[i])
	{
		if (ft_atoi_LL(array[i]) > max || ft_atoi_LL(array[i]) < min)
		{
			ft_putstr_fd("Error: some arguments are bigger or smaller than an integer\n", 2); // : some arguments are bigger or smaller than an integer
			exit(1);
		}
		i++;
	}
}

void	check_dup(char **array)
{
	int	i;
	int	j;

	i = 0;
	while (array[i])
	{
		j = i + 1;
		while (array[j])
		{
			if (ft_atoi(array[i]) == ft_atoi(array[j]))
			{
				ft_putstr_fd("Error: there are duplicates\n", 2); // : there are duplicates
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_valid_input(char **array)
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
			{
				ft_putstr_fd("Error: some arguments are not integers\n", 2); // : some arguments are not integers
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_errors(char **array)
{
	check_valid_input(array);
	check_int_size(array);
	check_dup(array);
}
