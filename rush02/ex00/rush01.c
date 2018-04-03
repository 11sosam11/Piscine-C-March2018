/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 14:24:35 by alyle             #+#    #+#             */
/*   Updated: 2018/04/01 17:58:06 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	*g_r01str;
int		*g_r01ptr;

void	ft_inputline(int x, char left, char middle, char right)
{
	int		column;

	column = 0;
	while (column < x)
	{
		if (column == 0)
			g_r01str[g_r01ptr] = left;
		else if (column == x - 1)
			g_r01str[g_r01ptr] = right;
		else
			g_r01str[g_r01ptr] = middle;
		column++;
		g_r01ptr++;
	}
}

char	*rush01_str(int x, int y)
{
	int		row;

	g_r01str = (char*)malloc(sizeof(*str) * ((x + 1) * y + 1));
	g_r01ptr = 0;
	row = 0;
	while (row < y && x > 0)
	{
		if (row == 0)
			ft_inputline(x, '/', '*', '\\');
		else if (row == y - 1)
			ft_inputline(x, '\\', '*', '/');
		else
			ft_inputline(x, '*', ' ', '*');
		row++;
	}
	g_r01str[g_r01ptr] = '\0';
	return (g_r01str);
}
