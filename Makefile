# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malatini <malatini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 08:34:15 by malatini          #+#    #+#              #
#    Updated: 2021/03/11 14:40:51 by malatini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./main/ft_printf.c \
		./struct/fill_struct_values.c \
		./struct/get_struct_values.c \
		./utils/utils1.c \
		./utils/utils2.c \
		./utils/utils3.c \
		./utils/utils4.c \
		./type_pc/type_pc.c \

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a
CC = gcc -g3
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
