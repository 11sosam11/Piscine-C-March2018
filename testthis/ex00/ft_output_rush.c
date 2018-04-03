/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_rush.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:40:27 by alyle             #+#    #+#             */
/*   Updated: 2018/04/01 19:44:36 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

void	output_rush00(int cols, int rows)
{
	if (g_valid_outputs)
		write(1, " || ", 4);
	write(1, "[rush-00] [", 11);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
	g_valid_outputs++;
}

void	output_rush01(int cols, int rows)
{
	if (g_valid_outputs)
		write(1, " || ", 4);
	write(1, "[rush-01] [", 11);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
	g_valid_outputs++;
}

void	output_rush02(int cols, int rows)
{
	if (g_valid_outputs)
		write(1, " || ", 4);
	write(1, "[rush-02] [", 11);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
	g_valid_outputs++;
}

void	output_rush03(int cols, int rows)
{
	if (g_valid_outputs)
		write(1, " || ", 4);
	write(1, "[rush-03] [", 11);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
	g_valid_outputs++;
}

void	output_rush04(int cols, int rows)
{
	if (g_valid_outputs)
		write(1, " || ", 4);
	write(1, "[rush-04] [", 11);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
	g_valid_outputs++;
}
