# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scarpent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/24 11:45:29 by scarpent          #+#    #+#              #
#    Updated: 2019/02/24 23:28:43 by scarpent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror
NAME=colle-2
INC=./includes
SRC=./srcs/ft_slice.c\
	./srcs/ft_readstdin.c\
	./srcs/libft.c\
	./srcs/rush_gen.c\
	./srcs/main.c\
	./srcs/ft_strcmp.c
OBJ=$(notdir $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) -o $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) -I $(INC) -c $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
