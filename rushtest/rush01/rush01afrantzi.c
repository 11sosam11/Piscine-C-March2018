/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrantzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 00:09:04 by afrantzi          #+#    #+#             */
/*   Updated: 2018/03/17 12:46:17 by afrantzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	first(int a)
{
	int i;

	i = 0;
	ft_putchar('/');
	while (++i < a - 1)
	{
		ft_putchar('*');
	}
	if (a > 1)
		ft_putchar('\\');
	ft_putchar('\n');
	return ;
}

void	sides(int a, int b)
{
	int i;
	int j;

	i = 1;
	while (++i < b)
	{
		j = -1;
		while (++j < a)
		{
			if (j == 0 || j == a - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	return ;
}

void	last(int a)
{
	int i;

	ft_putchar('\\');
	i = 0;
	while (++i < a - 1)
	{
		ft_putchar('*');
	}
	if (a > 1)
		ft_putchar('/');
	ft_putchar('\n');
	return ;
}


void	rush(int a, int b)
{
	if (a <= 0 || b <= 0)
		return ;
	first(a);
	if (b > 1)
	{
		sides(a, b);
		last(a);
	}
	return ;
}
