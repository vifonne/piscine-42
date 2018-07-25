# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vifonne <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/18 10:44:19 by vifonne           #+#    #+#              #
#    Updated: 2018/07/20 10:12:00 by vifonne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/do_op.c srcs/basic_functions.c srcs/calc_functions.c
INCLUDES = includes/
EXEC = do-op
CFLAGS = -Wall -Wextra -Werror
all: $(EXEC)

$(EXEC):
	gcc $(CFLAGS) -I $(INCLUDES) -o $(EXEC) $(SRCS)

clean:
	rm -f $(EXEC)

re: clean $(EXEC)
