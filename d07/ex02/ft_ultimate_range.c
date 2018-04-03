/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:34:10 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/22 21:06:08 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tmp;

	i = max - min;
	tmp = (int*)malloc(sizeof(*range) * i);
	*range = tmp;
	while (min < max)
		*tmp++ = min++;
	return (i);
}
