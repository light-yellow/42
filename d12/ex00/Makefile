# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgoyette <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 10:29:30 by jgoyette          #+#    #+#              #
#    Updated: 2018/11/21 10:39:34 by jgoyette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = srcs/ft_display_file.c srcs/ft_putchar.c srcs/ft_putstr.c
OBJECTS = ft_display_file.o ft_putchar.o ft_putstr.o
FLAGS = -Wall -Wextra -Werror
HEADERS_DIR = includes

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS_DIR)/ft.h
		gcc $(FLAGS) -c $(SRCS) -I$(HEADERS_DIR)
		gcc $(OBJECTS) -o $(NAME)

clean:
		/bin/rm -f $(OBJECTS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
