/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:22:10 by cglanvil          #+#    #+#             */
/*   Updated: 2019/08/30 16:18:50 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# define ERROR_EXIT {ft_putstr("Error\n"); exit(1);}
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
t_stack			*stacknew(void);
void			check_errors(char **array);
void			sa(t_stack **stack);
void			sb(t_stack **stack);
void			ss(t_stack **stack);
void			pa(t_stack **stack);
void			pb(t_stack **stack);
void			ra(t_stack **stack);
void			rb(t_stack **stack);
void			rr(t_stack **stack);
void			rra(t_stack **stack);
void			rrb(t_stack **stack);
void			rrr(t_stack **stack);
#endif
