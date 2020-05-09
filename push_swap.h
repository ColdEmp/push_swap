/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:22:10 by cglanvil          #+#    #+#             */
/*   Updated: 2019/09/04 15:42:58 by cglanvil         ###   ########.fr       */
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

t_ilist			*ilistnew(int nbr);
t_stack			*stacknew(void);
t_stack			*populate_stack(char **array);
int				test_stack(t_stack *stack);
int				test_a_sorted(t_stack *stack);
int				test_b_sorted(t_stack *stack);
int				list_size(t_stack *stack);
void			shift_right(t_stack **stack);
void			shift_left(t_stack **stack);
void			read_cmd(t_stack **stack);
void			check_errors(char **array);
void			print_stack(t_stack *stack);
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
void			sa_wo(t_stack **stack);
void			sb_wo(t_stack **stack);
void			ss_wo(t_stack **stack);
void			pa_wo(t_stack **stack);
void			pb_wo(t_stack **stack);
void			ra_wo(t_stack **stack);
void			rb_wo(t_stack **stack);
void			rr_wo(t_stack **stack);
void			rra_wo(t_stack **stack);
void			rrb_wo(t_stack **stack);
void			rrr_wo(t_stack **stack);
#endif
