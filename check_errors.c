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
				ERROR_EXIT;
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
				ERROR_EXIT;
			j++;
		}
		i++;
	}
}

void	check_errors(char **array)
{
	check_valid_input(array);
	check_dup(array);
}
