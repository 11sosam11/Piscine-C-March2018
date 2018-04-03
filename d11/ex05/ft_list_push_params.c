/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:34:55 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/28 16:11:21 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*current;
	t_list	*new;
	int		i;

	i = 1;
	current = 0;
	while (i < ac)
	{
		new = ft_create_elem(av[i++]);
		new->next = current;
		current = new;
	}
	return (current);
}
