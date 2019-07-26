# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/26 11:10:57 by cglanvil          #+#    #+#              #
#    Updated: 2019/07/26 12:46:54 by cglanvil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CNAME = checker
PSNAME = push_swap
LIBNAME = libft/libft.a
LIBFILES = libft/*.c
CFILES = checker.c libft/libft.a
PSFILES = push_swap.c libft/libft.a
all:
	gcc -c -Wall -Wextra -Werror $(LIBFILES)
	ar rc $(LIBNAME) *.o
	ranlib $(LIBNAME)
	gcc -Wall -Wextra -Werror $(CFILES) -o $(CNAME)
	gcc -Wall -Wextra -Werror $(PSFILES) -o $(PSNAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(LIBNAME)
	rm -f $(CNAME)
	rm -f $(PSNAME)
re: fclean all
