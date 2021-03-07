# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malatini <malatini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 08:34:15 by malatini          #+#    #+#              #
#    Updated: 2021/03/07 15:13:50 by malatini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./cors/fill_struct.c \
		./cors/get_struct.c \
		./cors/struct.c \
		./cors/utils.c \
		./cors/split_formats.c \

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
