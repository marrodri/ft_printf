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

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
INC = -I libft/
RM = rm -f
SRC = ft_printf.c \
	ft_fstr.c set_fflags.c \
	zero_flag.c char_form.c \
	int_form.c form_check.c 

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

.PHONY = all clean fclean re

all: $(NAME)

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT)
	@gcc $(CFLAGS) $(INC) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
