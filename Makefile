# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 15:11:30 by hahadiou          #+#    #+#              #
#    Updated: 2023/03/15 18:12:34 by hahadiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
FLAGS	= -Wall -Wextra -Werror -IINC

NAME	= push_swap
NAMEB	= checker

INC	= inc
UTILS_PATH	= utils
MANDATORY_PATH	= mandatory
SHARED_PATH	= shared
SH_OBJB_PATH	 = sh_obj
BONUS_PATH = bonus
OBJ_PATH	= obj
OBJB_PATH	= obj_bonus

SRCS = push_swap.c \
		main.c \
		solve.c \
		solve_small.c \
		sort.c 

SH_SRCS = init.c \
			check.c \
			push.c \
			rotate.c \
			swap.c

SRCSB = checker.c \
		
SRC		= $(addprefix $(MANDATORY_PATH)/,$(SRCS))
SRC_B	= $(addprefix $(BONUS_PATH)/,$(SRCSB))
SH_SRC 	= $(addprefix $(SHARED_PATH)/,$(SH_SRCS))
OBJ		= $(addprefix $(OBJ_PATH)/,$(SRCS:.c=.o))
OBJB	= $(addprefix $(OBJB_PATH)/,$(SRCSB:.c=.o))
SH_OBJ	= $(addprefix $(SH_OBJB_PATH)/,$(SH_SRCS:.c=.o))

NOC		= \033[0m
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m
WHITE	= \033[1;37m

all: $(NAME)

bonus: $(NAMEB)

$(NAME): $(OBJ) $(SH_OBJ)
	@echo "$(YELLOW)Compiling Utils...$(NOC)"
	@make -sC $(UTILS_PATH)
	@echo "$(YELLOW)Compiling Push_swap...$(NOC)"
	@$(CC) $(FLAGS) -L $(UTILS_PATH) -o $@ $^ -lft
	@echo "$(GREEN)$@$(NOC)"

$(OBJ_PATH)/%.o: $(MANDATORY_PATH)/%.c $(INC)/$(NAME).h
	@mkdir -p obj
	@$(CC) $(FLAGS) -I$(INC) -c -o $@ $<

$(SH_OBJB_PATH)/%.o: $(SHARED_PATH)/%.c $(INC)/$(NAME).h
	@mkdir -p sh_obj
	@$(CC) $(FLAGS) -I$(INC) -c -o $@ $<

$(NAMEB): $(OBJB) $(SH_OBJ)
	@echo "$(YELLOW)Compiling Utils...$(NOC)"
	@make -sC $(UTILS_PATH)
	@echo "$(YELLOW)Compiling Checker...$(NOC)"
	@$(CC) $(FLAGS) -L $(UTILS_PATH) -o $@ $^ -lft
	@echo "$(GREEN)$@$(NOC)"

$(OBJB_PATH)/%.o: $(BONUS_PATH)/%.c $(INC)/$(NAME).h
	@mkdir -p obj_bonus
	@$(CC) $(FLAGS) -I$(INC) -c -o $@ $<
	
clean:
	@echo "$(RED)Deleting OBJS ✔️ $(NOC)"
	@make clean -sC $(UTILS_PATH)
	@rm -rf $(OBJ_PATH)
	@rm -rf $(OBJB_PATH)
	@rm -rf $(SH_OBJB_PATH)

fclean: clean
	@echo "$(RED)Deleting Binary ✔️$(NOC)"
	@make fclean -sC $(UTILS_PATH)
	@rm -f $(NAME) ${NAMEB}

re: fclean all

.PHONY:	all clean fclean re 
