/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:31:30 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/27 16:45:32 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;

	new = *begin_list;
	if (!new)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (new->next)
		new = new->next;
	new->next = ft_create_elem(data);
}
