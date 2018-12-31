NAME = do-op
SRCS = srcs/ft_operations.c srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putnbr.c srcs/main.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
INCLUDES = includes

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)

.o: .c
	gcc $(CFLAGS) -c $? -o $@ -I$(INCLUDES)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
