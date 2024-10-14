# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:48:16 by mgomes-s          #+#    #+#              #
#    Updated: 2024/10/14 15:33:41 by mgomes-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =

OBJ = $(SRC:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

GREEN = \033[0;32m
RESET = \033[0m

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

%.o: %.c
	@ $(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	@ ar rcs $(NAME) $(OBJ) $(LIBFT)
	@ echo "$(GREEN)------ Successful compilation ✅ ------$(RESET)"

$(LIBFT):
	@ make -C $(LIBFT_DIR)

clean:
	@ rm -fr $(OBJ)
	@ echo "$(GREEN)------ Deleted object files ✅ ------$(RESET)"

fclean: clean
	@ rm -f $(NAME)
	@ make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
