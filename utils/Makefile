# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 17:29:07 by hahadiou          #+#    #+#              #
#    Updated: 2023/03/03 19:18:42 by hahadiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_puts.c \
		ft_split.c \
		ft_atoi.c 

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -I../inc/

RM = rm -f

all: ${NAME}

.c.o:
			@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
			@ar -rc $(NAME) $(OBJS)

clean:
			@${RM} ${OBJS}

fclean: clean
			@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re