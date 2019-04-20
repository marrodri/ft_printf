# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 15:22:50 by marrodri          #+#    #+#              #
#    Updated: 2019/04/09 15:22:51 by marrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf

CFLAGS = -Wall -Wextra -Werror
INC = -I libft/

SRC = main.c

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

.PHONY = all clean fclean re

all: $(NAME)

$(NAME):
	@gcc -c $(INC) $(CFLAGS) -c $(SRC)
