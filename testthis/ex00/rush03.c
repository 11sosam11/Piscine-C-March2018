/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rash03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 14:43:38 by zwen              #+#    #+#             */
/*   Updated: 2018/04/01 19:46:59 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

void	ft_inputline03(int x, char left, char middle, char right)
{
	int		column;

	column = 0;
	while (column < x)
	{
		if (column == 0)
			g_r03str[g_r03ptr] = left;
		else if (column == x - 1)
			g_r03str[g_r03ptr] = right;
		else
			g_r03str[g_r03ptr] = middle;
		column++;
		g_r03ptr++;
	}
}

char	*rush03_str(int x, int y)
{
	int		row;

	g_r03str = (char*)malloc(sizeof(*g_r03str) * ((x + 1) * y + 1));
	g_r03ptr = 0;
	row = 0;
	while (row < y && x > 0)
	{
		if (row == 0)
			ft_inputline03(x, 'A', 'B', 'C');
		else if (row == y - 1)
			ft_inputline03(x, 'A', 'B', 'C');
		else
			ft_inputline03(x, 'B', ' ', 'B');
		g_r03str[g_r03ptr] = '\n';
		g_r03ptr++;
		row++;
	}
	g_r03str[g_r03ptr] = '\0';
	return (g_r03str);
}
