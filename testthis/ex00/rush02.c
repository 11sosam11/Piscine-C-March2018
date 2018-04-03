/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 14:41:41 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/01 19:46:59 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

void	ft_inputline02(int x, char left, char middle, char right)
{
	int		column;

	column = 0;
	while (column < x)
	{
		if (column == 0)
			g_r02str[g_r02ptr] = left;
		else if (column == x - 1)
			g_r02str[g_r02ptr] = right;
		else
			g_r02str[g_r02ptr] = middle;
		column++;
		g_r02ptr++;
	}
}

char	*rush02_str(int x, int y)
{
	int		row;

	g_r02str = (char*)malloc(sizeof(*g_r02str) * ((x + 1) * y + 1));
	g_r02ptr = 0;
	row = 0;
	while (row < y && x > 0)
	{
		if (row == 0)
			ft_inputline02(x, 'A', 'B', 'A');
		else if (row == y - 1)
			ft_inputline02(x, 'C', 'B', 'C');
		else
			ft_inputline02(x, 'B', ' ', 'B');
		g_r02str[g_r02ptr] = '\n';
		g_r02ptr++;
		row++;
	}
	g_r02str[g_r02ptr] = '\0';
	return (g_r02str);
}
