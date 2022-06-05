# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jannabel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 20:52:55 by jannabel          #+#    #+#              #
#    Updated: 2021/11/03 20:53:00 by jannabel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_convert_to_hex.c ft_output_c.c ft_output_i_and_d.c \
			ft_output_p.c ft_output_s.c ft_output_u.c \
			ft_output_x_low.c ft_output_x_up.c ft_printf.c \
			ft_sort_arg.c ft_putchar.c ft_putnbr_u.c \
			ft_convert_to_hex_p.c
OBJS	=	$(SRCS:.c=.o)

LIB		=	libft.a
LIB_SRC	=	./libft
HEADER	=	ft_printf.h

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

all:		$(LIB) $(NAME)

$(NAME)	:	$(OBJS) $(HEADER) $(LIB_SRC)/$(LIB)
	ar rcs $(NAME) $? $(LIB_SRC)/*.o

$(LIB)	:		
	$(MAKE) all -C $(LIB_SRC)

%.o		:	%c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:		
	$(MAKE) clean -C $(LIB_SRC)
	$(RM) $(OBJS)

fclean	:	clean
	$(MAKE) fclean -C $(LIB_SRC)
	$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
