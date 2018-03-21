/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 14:57:38 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/17 16:10:40 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int out;

	i = 1;
	out = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	while (i <= nb)
	{
		out *= i;
		i++;
	}
	return (out);
}
