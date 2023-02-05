# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 15:11:30 by hahadiou          #+#    #+#              #
#    Updated: 2023/02/05 23:39:24 by hahadiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC		= cc
FLAGS	= -Wall -Wextra -Werror

NAME	= push_swap

INC	= inc
LIBFT_PATH	= libft
SRC_PATH	= src
OBJ_PATH	= obj

SRCS = push_swap.c \
		check.c \
		#init.c \
		index.c \
		push.c \

SRC		= $(addprefix $(SRC_PATH)/,$(SRCS))
OBJ		= $(addprefix $(OBJ_PATH)/,$(SRCS:.c=.o))

NOC		= \033[0m
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m
WHITE	= \033[1;37m

all: $(NAME)


$(NAME): $(OBJ)
	@echo "$(YELLOW)Compiling Libft...$(NOC)"
	@make -sC $(LIBFT_PATH)
	@echo "$(YELLOW)Compiling Push_Swap...$(NOC)"
	@$(CC) $(FLAGS) -L $(LIBFT_PATH) -o $@ $^ -lft
	@echo "$(GREEN)$@$(NOC)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(INC)/$(NAME).h
	@mkdir -p obj
	@$(CC) $(FLAGS) -I$(INC) -c -o $@ $<

clean:
	@echo "$(RED)clean$(NOC)"
	@make clean -sC $(LIBFT_PATH)
	@rm -rf $(OBJ_PATH)
	@rm -rf $(OBJB_PATH)

fclean: clean
	@echo "$(RED)fclean$(NOC)"
	@make fclean -sC $(LIBFT_PATH)
	@rm -f $(NAME) ${NAMEB}

re: fclean all


.PHONY:	all clean fclean re