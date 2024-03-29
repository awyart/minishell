# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awyart <awyart@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/20 13:23:55 by awyart            #+#    #+#              #
#    Updated: 2017/10/04 21:15:46 by awyart           ###   ########.fr        #
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

SRC1 = main.c \
		prompt.c

SRC2 = ft_cd.c \
		ft_echo.c \
		ft_env.c \
		ft_exit.c \
		ft_setenv.c\
		loadfunction.c

SRC3 = applyf.c \
		getenv.c \
		loadbuild.c

SRC4 = ft_get_path.c \
		ft_strjoine.c

SRC5 = signal.c\

SRC = $(patsubst %,srcs/%,$(SRC1)) \
		$(patsubst %,srcs/interface/%,$(SRC2)) \
		$(patsubst %,srcs/env/%,$(SRC3)) \
		$(patsubst %,srcs/utility/%,$(SRC4)) \
		$(patsubst %,srcs/signal/%,$(SRC5))


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

do :
	@$(CC) $(SRC) $(FLAG) $(LIB) -I $(IPATH) -o $(NAME)

.PHONY: clean fclean re
