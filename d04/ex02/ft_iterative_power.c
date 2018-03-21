/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 15:53:05 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/17 16:11:07 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int out;

	if (power <= 0)
		return (0);
	i = 0;
	out = 1;
	while (i < power)
	{
		out *= nb;
		i++;
	}
	return (out);
}
