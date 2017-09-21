# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awyart <awyart@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/20 13:23:55 by awyart            #+#    #+#              #
#    Updated: 2017/09/21 15:41:12 by awyart           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = minishell
FLAG = -Werror -Wall -Wextra 

LIBFT_DIR = libft/
LIBFT_LIB = libft.a
PRINTF_LIB = libft/ft_printf/libftprintf.a

LIB = $(LIBFT_DIR)/$(LIBFT_LIB) \
	$(PRINTF_LIB)

SRC1 = main.c \

SRC2 = *.c \

SRC3 = *.c\

SRC = $(patsubst %,srcs/%,$(SRC1)) \
		$(patsubst %,srcs/interface/%,$(SRC2)) \
		$(patsubst %,srcs/env/%,$(SRC3)) \

OBJ = $(patsubst %.c,%.o,$(SRC))

IPATH = includes

all: $(NAME)

$(NAME): $(SRC) 
	@make -C $(LIBFT_DIR)/
	@echo "Compilation libft:\033[92m OK\033[0m"
	@$(CC) $(SRC) $(FLAG) $(LIB) -I $(IPATH) -o $(NAME)
	@echo "Compilation:\033[92m OK\033[0m"

clean:
	@rm -f $(OBJ)
	@echo "Objets minishell supprimés :\033[92m OK\033[0m"
	@make -C $(LIBFT_DIR)/ clean

fclean: clean
	@rm -f $(NAME)
	@echo "minishell supprimé :\033[92m OK\033[0m"
	@make -C $(LIBFT_DIR)/ fclean

re: fclean all

.PHONY: clean fclean re
