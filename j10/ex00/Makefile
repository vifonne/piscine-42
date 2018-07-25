# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vifonne <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 17:45:47 by vifonne           #+#    #+#              #
#    Updated: 2018/07/18 19:13:29 by vifonne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_putstr.c\
	   srcs/ft_strlen.c
OBJ = *.o
TARGET = libft.a

all: $(TARGET)
$(TARGET):
	gcc $(CFLAGS) -c $(SRCS) -I includes/
	ar rcs $(TARGET) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(TARGET)
re: fclean $(TARGET)
