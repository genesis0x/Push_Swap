# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 17:29:07 by hahadiou          #+#    #+#              #
#    Updated: 2023/03/14 14:48:08 by hahadiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_puts.c \
		ft_split.c \
		ft_atoi.c \
		ft_strjoin.c \
		ft_free.c \
		ft_stack_size.c

OBJS = ${addprefix obj/, ${SRCS:.c=.o}}
OBJ_PATH = obj

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -I../inc/

RM = rm -f

all: ${NAME}

obj/%.o: %.c
			@mkdir -p $(OBJ_PATH)
			@${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJS)
			@ar -rc $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re 
