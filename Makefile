# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 15:11:30 by hahadiou          #+#    #+#              #
#    Updated: 2023/03/03 19:48:28 by hahadiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
FLAGS	= -Wall -Wextra -Werror -IINC

NAME	= push_swap
NAMEB	= checker

INC	= inc
UTILS_PATH	= utils
MANDATORY_PATH	= mandatory
BONUS_PATH = bonus
OBJ_PATH	= obj
OBJB_PATH	= obj_bonus

SRCS = push_swap.c \
		check.c \
		init.c \
		main.c \
		push.c \
		rotate.c \
		swap.c \
		solve.c \
		sort.c 
		
SRCSB = checker.c
		
SRC		= $(addprefix $(MANDATORY_PATH)/,$(SRCS))
SRC_B	= $(addprefix $(BONUS_PATH)/,$(SRCSB))
OBJ		= $(addprefix $(OBJ_PATH)/,$(SRCS:.c=.o))
OBJB	= $(addprefix $(OBJB_PATH)/,$(SRCSB:.c=.o))

NOC		= \033[0m
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m
WHITE	= \033[1;37m

all: $(NAME)

bonus: $(NAMEB)

$(NAME): $(OBJ)
	@echo "$(YELLOW)Compiling Utils...$(NOC)"
	@make -sC $(UTILS_PATH)
	@echo "$(YELLOW)Compiling Push_swap...$(NOC)"
	@$(CC) $(FLAGS) -L $(UTILS_PATH) -o $@ $^ -lft
	@echo "$(GREEN)$@$(NOC)"

$(OBJ_PATH)/%.o: $(MANDATORY_PATH)/%.c $(INC)/$(NAME).h
	@mkdir -p obj
	@$(CC) $(FLAGS) -I$(INC) -c -o $@ $<

$(NAMEB): $(OBJB)
	@echo "$(YELLOW)Compiling Utils...$(NOC)"
	@make -sC $(UTILS_PATH)
	@echo "$(YELLOW)Compiling Push_swap Bonus...$(NOC)"
	@$(CC) $(FLAGS) -L $(UTILS_PATH) -o $@ $^ -lft
	@echo "$(GREEN)$@$(NOC)"

$(OBJB_PATH)/%.o: $(BONUS_PATH)/%.c $(INC)/$(NAME).h
	@mkdir -p obj_bonus
	@$(CC) $(FLAGS) -I$(INC) -c -o $@ $<
	
clean:
	@echo "$(RED)Deleting Push_swap OBJS ✔️ $(NOC)"
	@make clean -sC $(UTILS_PATH)
	@rm -rf $(OBJ_PATH)
	@rm -rf $(OBJB_PATH)

fclean: clean
	@echo "$(RED)Deleting Push_swap Binary ✔️$(NOC)"
	@make fclean -sC $(UTILS_PATH)
	@rm -f $(NAME) ${NAMEB}

re: fclean all

.PHONY:	all clean fclean re 