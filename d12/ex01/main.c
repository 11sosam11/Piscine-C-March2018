/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:00:35 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/29 14:00:37 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		info;
	int		i;
	char	goods[2];

	if (argc < 2)
	{
		while ((info = read(STDIN_FILENO, goods, sizeof(goods) - 1)))
			write(1, goods, info);
		return (0);
	}
	i = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		while ((info = read(fd, goods, sizeof(goods) - 1)))
			write(STDOUT_FILENO, goods, info);
		close(fd);
	}
	return (0);
}
