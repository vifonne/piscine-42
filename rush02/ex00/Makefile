# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vifonne <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 11:41:02 by vifonne           #+#    #+#              #
#    Updated: 2018/07/22 15:14:48 by vifonne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_list_functions.c		\
	   srcs/ft_string_functions.c	\
	   srcs/ft_cmp_functions.c		\
	   srcs/rush00.c				\
	   srcs/ft_putnbr.c				\
	   srcs/main.c
INCLUDES = includes/
EXEC = colle-2
CFLAGS = -Wall -Wextra -Werror

all: $(EXEC)

$(EXEC):
	gcc $(CFLAGS) -I $(INCLUDES) -c $(SRCS)
	gcc $(CFLAGS) -I $(INCLUDES) -o $(EXEC) *.o
clean:
	rm -f *.o
fclean: clean
	rm -f $(EXEC)

re: fclean all
