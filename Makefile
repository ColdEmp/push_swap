# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/26 11:10:57 by cglanvil          #+#    #+#              #
#    Updated: 2019/08/30 15:41:20 by cglanvil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CNAME = checker
PSNAME = push_swap
LIBFILE = libft/libft.a
CFILES = checker.c
PSFILES = push_swap.c
SRC = intlstnew.c stacknew.c check_errors.c \
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
fclean: clean
	rm -f $(CNAME) $(PSNAME)
	make -C libft fclean
re: fclean all
norm:
	norminette $(CFILES) $(PSFILES) $(SRC) $(HEADER) 2>/dev/null
