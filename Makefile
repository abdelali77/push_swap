# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 22:15:23 by abmahfou          #+#    #+#              #
#    Updated: 2024/04/29 21:34:19 by abmahfou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

CC = cc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

MAIN = push_swap.c

SRC = split.c \
      push.c \
      reverse_rotate.c \
      rotate.c \
      stack_init.c \
      swap.c \
      errors.c \
	  algo.c \
	  algo2.c \
	  utils.c \
	  free_stack.c \
	  utils2.c 

SRC_B = bonus/checker_bonus.c \
		bonus/get_next_line/get_next_line.c \
		bonus/get_next_line/get_next_line_utils.c

OBJS = $(SRC:.c=.o)

MAIN_OBJ = $(MAIN:.c=.o)

OBJS_B = $(SRC_B:.c=.o)

HEADER = push_swap.h

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS) $(MAIN_OBJ)
	$(CC) $(CFLAGS) $(MAIN_OBJ) $(OBJS) -o $(NAME)
	@echo " ██▓███   █    ██   ██████  ██░ ██   ██████  █     █░ ▄▄▄       ██▓███  "
	@echo "▓██░  ██▒ ██  ▓██▒▒██    ▒ ▓██░ ██▒▒██    ▒ ▓█░ █ ░█░▒████▄    ▓██░  ██▒"
	@echo "▓██░ ██▓▒▓██  ▒██░░ ▓██▄   ▒██▀▀██░░ ▓██▄   ▒█░ █ ░█ ▒██  ▀█▄  ▓██░ ██▓▒"
	@echo "▒██▄█▓▒ ▒▓▓█  ░██░  ▒   ██▒░▓█ ░██   ▒   ██▒░█░ █ ░█ ░██▄▄▄▄██ ▒██▄█▓▒ ▒"
	@echo "▒██▒ ░  ░▒▒█████▓ ▒██████▒▒░▓█▒░██▓▒██████▒▒░░██▒██▓  ▓█   ▓██▒▒██▒ ░  ░"
	@echo "▒▓▒░ ░  ░░▒▓▒ ▒ ▒ ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒▒ ▒▓▒ ▒ ░░ ▓░▒ ▒   ▒▒   ▓▒█░▒▓▒░ ░  ░"
	@echo "░▒ ░     ░░▒░ ░ ░ ░ ░▒  ░ ░ ▒ ░▒░ ░░ ░▒  ░ ░  ▒ ░ ░    ▒   ▒▒ ░░▒ ░     "
	@echo "░░        ░░░ ░ ░ ░  ░  ░   ░  ░░ ░░  ░  ░    ░   ░    ░   ▒   ░░       "
	@echo "            ░           ░   ░  ░  ░      ░      ░          ░  ░         "


$(NAME_BONUS): $(OBJS) $(OBJS_B)
	$(CC) $(CFLAGS) $(OBJS) $(OBJS_B) -o $(NAME_BONUS)
	@echo " ▄████▄   ██░ ██ ▓█████  ▄████▄   ██ ▄█▀▓█████  ██▀███  "
	@echo "▒██▀ ▀█  ▓██░ ██▒▓█   ▀ ▒██▀ ▀█   ██▄█▒ ▓█   ▀ ▓██ ▒ ██▒"
	@echo "▒▓█    ▄ ▒██▀▀██░▒███   ▒▓█    ▄ ▓███▄░ ▒███   ▓██ ░▄█ ▒"
	@echo "▒▓▓▄ ▄██▒░▓█ ░██ ▒▓█  ▄ ▒▓▓▄ ▄██▒▓██ █▄ ▒▓█  ▄ ▒██▀▀█▄  "
	@echo "▒ ▓███▀ ░░▓█▒░██▓░▒████▒▒ ▓███▀ ░▒██▒ █▄░▒████▒░██▓ ▒██▒"
	@echo "░ ░▒ ▒  ░ ▒ ░░▒░▒░░ ▒░ ░░ ░▒ ▒  ░▒ ▒▒ ▓▒░░ ▒░ ░░ ▒▓ ░▒▓░"
	@echo "  ░  ▒    ▒ ░▒░ ░ ░ ░  ░  ░  ▒   ░ ░▒ ▒░ ░ ░  ░  ░▒ ░ ▒░"
	@echo "░         ░  ░░ ░   ░   ░        ░ ░░ ░    ░     ░░   ░ "
	@echo "░ ░       ░  ░  ░   ░  ░░ ░      ░  ░      ░  ░   ░     "
	@echo "░                       ░                                 "

bonus:	$(NAME_BONUS)

clean:
	$(RM) $(OBJS) $(OBJS_B) $(MAIN_OBJ)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY : all clean fclean re