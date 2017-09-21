NAME = libftprintf.a

LIBDIR = libft
SRC1 =\
	conv_char.c\
	conv_fun.c\
	conv_int.c\
	conv_str.c\
	conv_uint.c\
	conv_unit2.c\
	ft_printf.c\
	get_cast.c\
	get_opt.c\
	get_values.c\
	opt_fun.c\
	opt_min.c\
	opt_width_prec_digit.c\
	opt_width_prec_str.c\
	print_out.c\
	ft_abs.c\
	ft_atoi.c\
	ft_atoi_base.c\
	ft_bzero.c\
	ft_cap_itoa_base.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isc.c\
	ft_isdigit.c\
	ft_iseven.c\
	ft_islower.c\
	ft_isnu.c\
	ft_isprint.c\
	ft_isspace.c\
	ft_isupper.c\
	ft_itoa_base.c\
	ft_itoa_str.c\
	ft_lltoa_str.c\
	ft_ltoa_base.c\
	ft_ltoa_str.c\
	ft_putchar_uni.c\
	ft_putstr_uni.c\
	ft_strcmp.c\
	ft_strcpy.c\
	ft_strcpy_ret.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strncpy.c\
	ft_strncpy_ret.c\
	ft_uitoa_str.c\
	ft_ultoa.c\
	ft_ultoa_base.c\
	nbr_size.c

SRC = $(patsubst %,libftprintf/%,$(SRC1))

CC = gcc
FLAG = -Wall -Wextra -Werror -c -O2
OBJ = *.o

all: $(NAME)

$(NAME): $(SRC) 
	@$(CC) $(FLAG) $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@echo "Objets printf supprimés :\033[92m OK\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "libftftprint.a supprimé :\033[92m OK\033[0m"

re: fclean all

.PHONY: clean fclean re
