# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:48:16 by mgomes-s          #+#    #+#              #
#    Updated: 2024/10/17 15:00:49 by mgomes-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_putstr.c \
	  ft_decimal.c \
	  ft_putnbr_xmin.c \
	  ft_putnbr_xmax.c \
	  ft_point.c

OBJ = $(SRC:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

%.o: %.c
	@ $(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ ar rcs $(NAME) $(OBJ)
	@ echo "$(GREEN)------ Successful compilation ✅ ------$(RESET)"

clean:
	@ rm -fr $(OBJ)
	@ echo "$(GREEN)------ Deleted object files ✅ ------$(RESET)"

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
