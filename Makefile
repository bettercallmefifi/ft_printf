NAME = printf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_check_printf.c ft_print_putchar.c \
	 ft_print_putstr.c ft_print_putnbr.c ft_print_unsigned.c \
	 ft_print_hexadecimal.c ft_print_pointer.c \
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re