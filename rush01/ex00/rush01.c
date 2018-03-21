/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrantzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 00:09:04 by afrantzi          #+#    #+#             */
/*   Updated: 2018/03/18 00:07:21 by afrantzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	first(int x)
{
	int i;

	i = 0;
	ft_putchar('/');
	while (++i < x - 1)
	{
		ft_putchar('*');
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
	return ;
}

void	sides(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			if (j == 0 || j == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	return ;
}

void	last(int x)
{
	int i;

	ft_putchar('\\');
	i = 0;
	while (++i < x - 1)
	{
		ft_putchar('*');
	}
	if (x > 1)
		ft_putchar('/');
	ft_putchar('\n');
	return ;
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	first(x);
	if (y > 1)
	{
		sides(x, y);
		last(x);
	}
	return ;
}
