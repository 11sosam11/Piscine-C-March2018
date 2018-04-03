/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 23:04:54 by alyle             #+#    #+#             */
/*   Updated: 2018/04/01 17:56:28 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	*isanotherexe(*str)
{
	int i;
	int info;
	char goods[2];
	char *exe;

	if (str[i] == '|' )
	{
		while ((info = read(STDIN_FILENO, goods, sizeof(goods) - 1)))
			{
				exe = malloc(sizeof(char) * info);
				exe += goods;
			}
		return (0);
	}
}

int		rush_valid_rows(char *str)
{
	int		i;
	int		colcount;

	i = 0;
	colcount = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (!colcount)
				colcount = i;
			else if ((i - colcount) - 1 != colcount)
				return (FALSE);
		}
		i++;
	}
	return (TRUE);
}

int		num_rows(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int		num_cols(char *str)
{
	int		i;

	while (str[i])
	{
		if (str[i] = '\n')
			return (i);
		i++;
	}
	return (-1);
}

void	ft_check_rush(char *str)
{
	int		cols;
	int		rows;

	g_valid_outputs = 0;
	if (rush_valid_rows(str))
	{
		cols = num_cols(str);
		rows = num_rows(str);
	}
	if (!strcmp(str, rush00_str(cols, rows)))
		output_rush00(cols, rows);
	if (!strcmp(str, rush01_str(cols, rows)))
		output_rush01(cols, rows);
	if (!strcmp(str, rush02_str(cols, rows)))
		output_rush02(cols, rows);
	if (!strcmp(str, rush03_str(cols, rows)))
		output_rush03(cols, rows);
	if (!strcmp(str, rush04_str(cols, rows)))
		output_rush04(cols, rows);
	free(g_r00str);
	free(g_r01str);
	free(g_r02str);
	free(g_r03str);
	free(g_r04str);
}
