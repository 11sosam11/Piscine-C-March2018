/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:14:21 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/28 18:31:21 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;
	t_list *new;

	new = *begin_list;
	while (new)
	{
		temp = new;
		free(new);
		new = temp->next;
	}
	*begin_list = 0;
}
