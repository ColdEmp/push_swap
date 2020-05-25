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

typedef struct	s_ilist
{
	int				nbr;
	struct s_ilist	*next;
}				t_ilist;

typedef struct	s_stack
{
	struct s_ilist	*a;
	struct s_ilist	*b;
}				t_stack;

void			check_bottom(t_stack **stack);
void			check_errors(char **array);
void			check_top(t_stack **stack);
int				current_position(t_ilist *list);
void			filter(t_stack **stack, int min, int max);
int				find_route(t_ilist *list, int nbr);
long long		ft_atoi_LL(char const *s);
t_ilist			*ilistnew(int nbr);
void    		index_list(t_stack **stack, int *array, int len);
int				is_num_in(t_ilist *list, int number);
int				is_range_in(t_ilist *list, int first, int second);
int				list_size(t_ilist *list);
void			merge(t_stack **stack, int min, int current);
int 			*new_int_array(char  **array, int len);
t_stack			*populate_stack(char **array);
void			print_stack(t_stack *stack);
int				rate_position(t_ilist *list, int number);
void			read_cmd(t_stack **stack);
void			reverse_rotate(t_stack **stack);
void    		rotate(t_stack **stack);
void			shift_left(t_stack **stack);
void			shift_right(t_stack **stack);
void			sort_right_left(t_stack **stack);
void			sort(t_stack **stack);
t_stack			*stacknew(void);
int				test_a_sorted(t_stack *stack);
int				test_b_sorted(t_stack *stack);
int				test_stack(t_stack *stack);
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
