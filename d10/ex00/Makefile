NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAGS = -Wall -Werror -Wextra

HEADERS_DIR = includes

all: $(NAME)
	
$(NAME): $(SRCS) $(HEADERS_DIR)/ft.h
	gcc $(FLAGS) -c $(SRCS) -I$(HEADERS_DIR)
	ar rc $(NAME) $(OBJECTS)

clean:
		/bin/rm -f $(OBJECTS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
