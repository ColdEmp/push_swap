# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/26 11:10:57 by cglanvil          #+#    #+#              #
#    Updated: 2019/07/30 11:27:29 by cglanvil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CNAME = checker
PSNAME = push_swap
LIBNAME = libft/libft.a
CFILES = checker.c $(LIBNAME)
PSFILES = push_swap.c $(LIBNAME)
SRC = checker.c push_swap.c 
all: $(LIBNAME) $(CNAME) $(PSNAME)
$(LIBNAME):
	make -C libft
$(CNAME): $(CFILES)
	gcc -Wall -Wextra -Werror $(CFILES) -o $(CNAME)
$(PSNAME): $(PSFILES)
	gcc -Wall -Wextra -Werror $(PSFILES) -o $(PSNAME)
clean:
	make -C libft clean
fclean: clean
	rm -f $(CNAME) $(PSNAME)
	make -C libft fclean
re: fclean all
norm:
	norminette $(SRC)
