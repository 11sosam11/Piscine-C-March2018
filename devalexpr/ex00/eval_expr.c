/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:35:17 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/31 11:35:20 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

int	eval_expr(char *s);

int coolstuff(char *ns, char *os, int *pos)
{
	int sum;

	sum = 0;
	while (ns[pos[0]] >= 0)
	{
		sum += ops(ns[pos[0]] - '0', ns[--pos[0]] - '0', os[pos[1]--]);
		ns[pos[0]] = sum;
	}
	return (sum);
}

void	nummem(char *s, char *numstack, int *pos)
{
	numstack = (char *)malloc(sizeof(char) + 1);
	numstack[pos[0]] = *s - 48;
}

void	opmem(char *s, char *opstack, int *pos)
{
	opstack = (char *)malloc(sizeof(char) + 1);
	opstack[pos[1]] = *s;
}

int	ifs(char *s, int i, int *pos, char *numstack, char *opstack)
{
	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			nummem(&s[i], numstack, pos);
			pos[0]++;
		}
		else if (s[i] == 42 || s[i] == 43 || s[i] == 45 || s[i] == 47 || s[i] == 37)
		{
			opmem(&s[i], opstack, pos);
			pos[1]++;
		}
		else if (s[i] == 40)
		{
			opstack = (char *)malloc(sizeof(char) + 1);
			numstack = (char *)malloc(sizeof(char) + 1);
			opstack[pos[1]++] = s[i];
			numstack[pos[0]] = eval_expr(&s[i]);
			pos[0]++;
		}
		else if (s[i] == 41 )
		{
			return (coolstuff(numstack, opstack, pos));
		}
		i++;
	}
	return (0);
}

int	eval_expr(char *s)
{
	char	*numstack;
	char	*opstack;
	int		i;
	int		pos[2];

	pos[0] = 0;
	pos[1] = 0;
	i = 0;
	opstack = (char *)malloc(sizeof(char) + 1);
	numstack = (char *)malloc(sizeof(char) + 1);
	if (s[i] != '\0')
		ifs(s, i, pos, numstack, opstack);
	return (coolstuff(numstack, opstack, pos));
}
