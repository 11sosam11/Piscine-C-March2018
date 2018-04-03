/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:45:15 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/26 15:57:54 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *end;

	i = 0;
	end = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		end[i] = (*f)(tab[i]);
		i++;
	}
	return (end);
}
