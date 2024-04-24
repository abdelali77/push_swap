# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 22:15:23 by abmahfou          #+#    #+#              #
#    Updated: 2024/04/23 21:02:21 by abmahfou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

CC = cc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c \
	  split.c \
      push.c \
      reverse_rotate.c \
      rotate.c \
      stack_init.c \
      swap.c \
      errors.c \
	  algo.c \
	  algo2.c \
	  utils.c

SRC_B = bonus/checker_bonus.c \
		bonus/get_next_line

HEADER = push_swap.h

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "██████╗ ██╗   ██╗███████╗██╗  ██╗        ███████╗██╗    ██╗ █████╗ ██████╗ "
	@echo "██╔══██╗██║   ██║██╔════╝██║  ██║        ██╔════╝██║    ██║██╔══██╗██╔══██╗"
	@echo "██████╔╝██║   ██║███████╗███████║        ███████╗██║ █╗ ██║███████║██████╔╝"
	@echo "██╔═══╝ ██║   ██║╚════██║██╔══██║        ╚════██║██║███╗██║██╔══██║██╔═══╝ "
	@echo "██║     ╚██████╔╝███████║██║  ██║███████╗███████║╚███╔███╔╝██║  ██║██║     "
	@echo "╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     "

bonus:	$(NAME)
	$(CC) $(CFLAGS) $(SRC_B) -o $(NAME_BONUS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re