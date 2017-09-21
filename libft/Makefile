# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awyart <awyart@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/11 11:47:39 by awyart            #+#    #+#              #
#    Updated: 2017/09/21 13:15:03 by awyart           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Werror -Wall -Wextra
PRINTF_DIR = ft_printf
SRC = srcs/*.c
	
OBJ = *.o

IPATH = includes
VPATH = srcs

all : $(NAME)

$(NAME) : $(SRC)
	@make -C $(PRINTF_DIR)/
	@echo "Compilation printf:\033[92m OK\033[0m"
	@$(CC) $(CFLAGS) -I $(IPATH) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean : 
	@rm -f $(OBJ)
	@echo "Objets libft supprimés :\033[92m OK\033[0m"
	@make -C $(PRINTF_DIR)/ clean

fclean : clean
	@rm -f $(NAME)
	@echo "libft.a supprimé :\033[92m OK\033[0m"
	@make -C $(PRINTF_DIR)/ fclean

re : fclean $(NAME)
