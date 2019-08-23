/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:22:10 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/23 16:59:35 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# define DUP_NUMS {ft_putstr("Duplicate numbers\n"); exit(1);}
# define ERROR_EXIT {ft_putstr("ERROR\n"); exit(1);}
# define OK {ft_putstr("OK\n"); exit(1);}
# define KO {ft_putstr("KO\n"); exit(1);}

typedef struct	s_ilist
{
	int				nbr;
	struct s_ilist	*next;
}				t_ilist;

typedef struct	s_stack
{
	t_ilist	*a;
	t_ilist	*b;
}				t_stack;

t_ilist			*intlstnew(int nbr);
void			check_errors(char **array);
#endif
