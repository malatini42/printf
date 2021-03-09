# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malatini <malatini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 08:34:15 by malatini          #+#    #+#              #
#    Updated: 2021/03/09 16:04:51 by malatini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./struct/initialize_struct.c \
		./struct/get_struct_values.c \
		./struct/fill_struct_values.c \
		./core/split_format.c \
		./core/ft_printf.c \
		./utils/utils.c \

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a
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
