/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 14:24:35 by alyle             #+#    #+#             */
/*   Updated: 2018/04/01 16:40:52 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	*g_r00str;
int		*g_r00ptr;

void	ft_inputline(int x, char left, char middle, char right)
{
	int		column;

	column = 0;
	while (column < x)
	{
		if (column == 0)
			g_r00str[g_r00ptr] = left;
		else if (column == x - 1)
			g_r00str[g_r00ptr] = right;
		else
			g_r00str[g_r00ptr] = middle;
		column++;
		g_r00ptr++;
	}
}

char	*rush00_str(int x, int y)
{
	int		row;

	g_r00str = (char*)malloc(sizeof(*str) * ((x + 1) * y + 1));
	g_r00ptr = 0;
	row = 0;
	while (row < y && x > 0)
	{
		if (row == 0)
			ft_inputline(x, 'o', '-', 'o');
		else if (row == y - 1)
			ft_inputline(x, 'o', '-', 'o');
		else
			ft_inputline(x, '|', ' ', '|');
		row++;
	}
	g_r00str[g_r00ptr] = '\0';
	return (g_r00str);
}
