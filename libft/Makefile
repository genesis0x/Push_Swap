SRCS =	${wildcard *.c}

OBJS = ${SRCS:.c=.o}

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
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
