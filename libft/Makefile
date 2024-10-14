# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:48:16 by mgomes-s          #+#    #+#              #
#    Updated: 2024/10/14 15:37:24 by mgomes-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar_fd.c ft_isdigit.c ft_strdup.c ft_strncmp.c \
	  ft_tolower.c ft_isprint.c ft_strlen.c ft_putstr_fd.c \
	  ft_putnbr_fd.c ft_strlcpy.c ft_bzero.c ft_putendl_fd.c \
	  ft_memcpy.c ft_isalnum.c ft_isascii.c ft_isalpha.c \
	  ft_toupper.c ft_memset.c ft_atoi.c ft_strlcat.c ft_memchr.c \
	  ft_memcmp.c ft_memmove.c ft_strchr.c ft_strnstr.c ft_strrchr.c \
	  ft_calloc.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c ft_split.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJ = $(BONUS:.c=.o)

OBJ = $(SRC:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	@ $(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	@ ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	@ rm -fr $(OBJ) $(BONUS_OBJ)

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
