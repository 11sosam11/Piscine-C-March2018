/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:18:22 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/31 11:18:32 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ops(int num1, int num2, char op)
{
	if (op == '*')
		return (num1 * num2);
	else if (op == '+')
		return (num1 + num2);
	else if (op == '-')
		return (num1 - num2);
	else if (op == '%')
		return (num1 % num2);
	else if (op == '/')
		return (num1 / num2);
	return (0);
}
