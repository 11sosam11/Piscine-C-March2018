/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 23:04:54 by alyle             #+#    #+#             */
/*   Updated: 2018/04/01 19:48:37 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

int		rush_valid_rows(char *str)
{
	int		i;
	int		colcount;
	int		prevcolcount;

	i = 0;
	prevcolcount = 0;
	while (str[i])
	{
		colcount = 0;
		if (str[i] == '\n')
		{
			if (!prevcolcount)
				prevcolcount = colcount;
			else if (prevcolcount != colcount)
				return (FALSE);
		}
		i++;
		colcount++;
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

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
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
		if (!ft_strcmp(str, rush00_str(cols, rows)))
			output_rush00(cols, rows);
		if (!ft_strcmp(str, rush01_str(cols, rows)))
			output_rush01(cols, rows);
		if (!ft_strcmp(str, rush02_str(cols, rows)))
			output_rush02(cols, rows);
		if (!ft_strcmp(str, rush03_str(cols, rows)))
			output_rush03(cols, rows);
		if (!ft_strcmp(str, rush04_str(cols, rows)))
			output_rush04(cols, rows);
		free(g_r00str);
		free(g_r01str);
		free(g_r02str);
		free(g_r03str);
		free(g_r04str);
	}
}
