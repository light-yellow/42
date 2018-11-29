/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoyette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 10:44:35 by jgoyette          #+#    #+#             */
/*   Updated: 2018/11/21 10:50:21 by jgoyette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

#define BUFFER_SIZE 4096

void	ft_display_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buffer[BUFFER_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (fd != -1)
	{
		while ((ret = read(fd, buffer, BUFFER_SIZE)))
		{
			buffer[ret] = '\0';
			ft_putstr(buffer);
		}
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
