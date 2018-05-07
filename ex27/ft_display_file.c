/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorniie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:06:47 by mkorniie          #+#    #+#             */
/*   Updated: 2017/10/30 20:13:46 by mkorniie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_printfile(int fd)
{
	int		r;
	char	buf;

	r = read(fd, &buf, 1);
	while (r != 0)
	{
		ft_putchar(buf);
		r = read(fd, &buf, 1);
	}
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		ft_printfile(fd);
		close(fd);
	}
	return (0);
}
