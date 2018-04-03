/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:00:35 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/29 22:01:54 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	argumentammmount(int argc)
{
	if (argc < 2)
	{
		write(1, "File name missing\n", 20);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments\n", 19);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		info;
	char	goods[2469];

	if (argumentammmount(argc) == 0)
		return (0);
	fd = open(argv[1], O_RDONLY);
	while ((info = read(fd, goods, sizeof(goods) - 1)))
		write(1, goods, info);
	close(fd);
	return (0);
}
