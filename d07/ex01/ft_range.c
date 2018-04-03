/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 12:37:25 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/21 23:12:36 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	if (min > max)
		return (0);
	num = (int*)malloc(sizeof(min) * (max - min));
	i = 0;
	while (min != max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}
