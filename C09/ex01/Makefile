# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/22 19:21:44 by dvallien          #+#    #+#              #
#    Updated: 2021/09/23 14:51:32 by dvallien         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS=./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS=$(SRCS:.c=.o)
HDRS=./includes/
CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a

all:	$(NAME)

$(NAME): $(OBJS)
		ar rcs libft.a $(OBJS)
		
clean:
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all

.c.o: $(SRCS)
	$(CC) -c $(CFLAGS) -I $(HDRS) $< -o $(<:.c=.o)

.PHONY:	all clean fclean re
