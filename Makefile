# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malatini <malatini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 08:34:15 by malatini          #+#    #+#              #
#    Updated: 2021/03/09 08:37:17 by malatini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./struct/fill_struct.c \
		./struct/get_struct.c \
		./struct/struct.c \
		./struct/utils.c \
		./struct/split_formats.c \
		./struct/ft_printf.c

OBJS = ${SRCS:.c=.o}

NAME = libprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: 		${NAME}

$(NAME):	$(OBJS)
			ar -rc $(NAME) $(OBJS)

clean:
			${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
			${RM} ${NAME}

re: fclean all

.PHONY:		bonus all clean fclean re
