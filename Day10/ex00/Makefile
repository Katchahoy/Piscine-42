# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scarpent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/19 21:37:20 by scarpent          #+#    #+#              #
#    Updated: 2019/02/26 18:29:48 by scarpent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
INC=./includes
SRC=./srcs/ft_putchar.c\
	./srcs/ft_putstr.c\
	./srcs/ft_strcmp.c\
	./srcs/ft_strlen.c\
	./srcs/ft_swap.c
OBJ=$(notdir $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ):
	$(CC) $(CFLAGS) -I $(INC) -c $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
