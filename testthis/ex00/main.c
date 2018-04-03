/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 22:38:01 by alyle             #+#    #+#             */
/*   Updated: 2018/04/01 20:36:03 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

int		main(void)
{
	char	*input_string;

	input_string = ft_import_stdin();
	if (!input_string)
		write(1, "aucune", 6);
	else
		ft_check_rush(input_string);
	if (!g_valid_outputs && input_string)
		write(1, "aucune", 6);
	write(1, "\n", 1);
	return (0);
}
