# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vifonne <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/22 17:27:43 by vifonne           #+#    #+#              #
#    Updated: 2018/07/24 20:34:15 by vifonne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_basic_string_parsing.c	\
	   srcs/ft_list_functions.c			\
	   srcs/ft_read_functions.c			\
	   srcs/ft_check.c					\
	   srcs/ft_error.c					\
	   srcs/ft_basic_string_mgmt.c		\
	   srcs/ft_tabint.c					\
	   srcs/ft_write.c					\
	   srcs/main.c
OBJ = ft_basic_string_parsing.o			\
	   ft_list_functions.o				\
	   ft_read_functions.o				\
	   ft_check.o						\
	   ft_error.o						\
	   ft_basic_string_mgmt.o			\
	   ft_tabint.o						\
	   ft_write.o						\
	   main.o
INCLUDES = includes/
NAME = bsq
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -I $(INCLUDES) -c $(SRCS)
	gcc $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
