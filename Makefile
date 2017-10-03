# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awyart <awyart@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/20 13:23:55 by awyart            #+#    #+#              #
#    Updated: 2017/10/03 22:17:59 by awyart           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = minishell

ifeq ($(DEBUG), yes)
	FLAG = -g3
else
	FLAG = -Werror -Wall -Wextra 
endif

LIBFT_DIR = libft/
LIBFT_LIB = libft.a
PRINTF_LIB = libft/ft_printf/libftprintf.a

LIB = $(LIBFT_DIR)/$(LIBFT_LIB) \
	$(PRINTF_LIB)

SRC1 = *.c \

SRC2 = *.c \

SRC3 = *.c\

SRC4 = *.c\

SRC5 = *.c\

SRC = $(patsubst %,srcs/%,$(SRC1)) \
		$(patsubst %,srcs/interface/%,$(SRC2)) \
		$(patsubst %,srcs/env/%,$(SRC3)) \
		$(patsubst %,srcs/utility/%,$(SRC4)) \
		$(patsubst %,srcs/signal/%,$(SRC5))


OBJ = $(patsubst %.c,%.o,$(SRC))

IPATH = includes

all: $(NAME)

$(NAME): $(SRC) 
	@echo "$(FLAG)"
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

do :
	@$(CC) $(SRC) $(FLAG) $(LIB) -I $(IPATH) -o $(NAME)

.PHONY: clean fclean re
