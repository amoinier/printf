#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoinier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 11:25:20 by amoinier          #+#    #+#              #
#    Updated: 2016/03/14 18:47:07 by amoinier         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a

SRC =	ft_printf.c		\
		ft_putstr.c		\
		ft_putchar.c	\
		ft_putnbr.c		\
		ft_itoa.c		\
		ft_atoi.c		\
		ft_power.c		\
		ft_strlen.c		\
		ft_strdup.c

OFL = $(SRC:.c=.o)

FLGS = -Wall -Wextra -Werror

$(NAME):
	@gcc $(FLGS) -c $(SRC)  -I./
	@ar rc $(NAME) $(OFL)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@rm -f $(OFL)

fclean: clean
	@rm -f $(NAME)

re: fclean all