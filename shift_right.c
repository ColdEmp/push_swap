/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:21:29 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/12 17:37:35 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_right(t_stack **stack)
{
	check_top(&*stack);
    check_bottom(&*stack);
	if (test_a_sorted(*stack) != 1)
		pb_wo(&*stack);
}
