# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/30 12:24:30 by jpaselt           #+#    #+#              #
#    Updated: 2024/12/06 22:36:35 by jpaselt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

SOURCES		=	fi_putchar.c fi_putstr.c  fi_putnbr.c \
				ft_printf.c puthex.c putptr.c putuint.c \
				
OBJS		=	$(SOURCES:.c=.o)

HEADER		=	ft_printf.h

RM			=	rm -f

all:		${NAME}

${NAME}: 	$(OBJS) 
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

%.o: %.c $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re