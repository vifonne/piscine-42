# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vifonne <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/22 13:47:46 by vifonne           #+#    #+#              #
#    Updated: 2018/07/22 13:50:22 by vifonne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_string_functions.c	\
	   srcs/main.c					\
	   srcs/ft_list_functions.c		\

INCLUDES=includes/
EXEC=evalexp
CFLAGS=-Wall -Wextra -Werror

all: $(EXEC)

$(EXEC):
	gcc $(CFLAGS) -I $(INCLUDES) -o $(EXEC) $(SRCS)

clean:
	rm -f $(EXEC)
re: clean $(EXEC)
