/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 14:24:35 by alyle             #+#    #+#             */
/*   Updated: 2018/04/01 19:46:40 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

void	ft_inputline04(int x, char left, char middle, char right)
{
	int		column;

	column = 0;
	while (column < x)
	{
		if (column == 0)
			g_r04str[g_r04ptr] = left;
		else if (column == x - 1)
			g_r04str[g_r04ptr] = right;
		else
			g_r04str[g_r04ptr] = middle;
		column++;
		g_r04ptr++;
	}
}

char	*rush04_str(int x, int y)
{
	int		row;

	g_r04str = (char*)malloc(sizeof(*g_r04str) * ((x + 1) * y + 1));
	g_r04ptr = 0;
	row = 0;
	while (row < y && x > 0)
	{
		if (row == 0)
			ft_inputline04(x, 'A', 'B', 'C');
		else if (row == y - 1)
			ft_inputline04(x, 'C', 'B', 'A');
		else
			ft_inputline04(x, 'B', ' ', 'B');
		g_r04str[g_r04ptr] = '\n';
		g_r04ptr++;
		row++;
	}
	g_r04str[g_r04ptr] = '\0';
	return (g_r04str);
}
