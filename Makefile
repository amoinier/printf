# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 11:25:20 by amoinier          #+#    #+#              #
#    Updated: 2016/03/18 12:07:08 by amoinier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c		\
		ft_putstr.c		\
		ft_putchar.c	\
		ft_putnbr.c		\
		ft_putunbr.c	\
		ft_itoa.c		\
		ft_uitoa.c		\
		ft_atoi.c		\
		ft_power.c		\
		ft_strlen.c		\
		ft_strdup.c		\
		ft_itoa_base.c	\
		ft_itoa_basex.c	\
		flag_s.c		\
		flag_c.c		\
		flag_di.c		\
		flag_u.c		\
		flag_o.c		\
		flag_x.c		\
		flag_p.c		\
		flag_C.c		\
		flag_X.c		\
		flag_D.c		\
		flag_U.c		\
		flag_O.c		\
		flag_X.c

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
