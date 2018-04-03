/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_import.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 19:06:38 by alyle             #+#    #+#             */
/*   Updated: 2018/04/01 19:50:25 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

t_list		*ft_create_list(char c)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(*list));
	list->next = NULL;
	list->c = c;
	return (list);
}

void		ft_push_list(t_list **first, char c)
{
	t_list	*list;

	list = *first;
	if (!list)
	{
		*first = ft_create_list(c);
		return ;
	}
	while (list->next)
		list = list->next;
	list->next = ft_create_list(c);
}

char		*ft_concat_list(t_list *list, int len)
{
	int		i;
	char	*str;

	str = NULL;
	i = 0;
	if (list)
	{
		str = (char*)malloc(sizeof(*str) * (len + 1));
		while (i < len)
		{
			str[i] = list->c;
			list = list->next;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

char		*ft_import_stdin(void)
{
	t_list	*list;
	char	buf;
	char	*str;
	int		i;

	list = NULL;
	str = NULL;
	i = 0;
	while (read(0, &buf, 1) > 0)
	{
		ft_push_list(&list, buf);
		i++;
	}
	str = ft_concat_list(list, i);
	return (str);
}
