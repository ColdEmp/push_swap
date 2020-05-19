# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/26 11:10:57 by cglanvil          #+#    #+#              #
#    Updated: 2019/09/04 15:35:46 by cglanvil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CNAME = checker
PSNAME = push_swap
LIBFILE = libft/libft.a
CFILES = checker.c
PSFILES = push_swap.c
SRC = check_bottom.c check_errors.c check_top.c ft_atoi_LL.c ilistnew.c \
	index_list.c \int_array list_size.c merge.c \
	populate_stack.c print_stack.c rate_position.c read_cmd.c shift_left.c \
	shift_right.c sort.c stacknew.c test_a_sorted.c test_b_sorted.c test_stack.c \
	sa.c sb.c ss.c pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c
HEADER = push_swap.h
all: $(LIBFILE) $(CNAME) $(PSNAME)
$(LIBFILE):
	make -C libft
$(CNAME): $(CFILES)
	gcc -Wall -Wextra -Werror $(CFILES) $(SRC) $(LIBFILE) -o $(CNAME)
$(PSNAME): $(PSFILES)
	gcc -Wall -Wextra -Werror $(PSFILES) $(SRC) $(LIBFILE) -o $(PSNAME)
clean:
	make -C libft clean
libft_fclean:
	make -C libft fclean
fclean: libft_fclean
	rm -f $(CNAME) $(PSNAME)
re: fclean all
norm:
	norminette $(CFILES) $(PSFILES) $(SRC) $(HEADER) 2>/dev/null
