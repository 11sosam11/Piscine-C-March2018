/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:16:40 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/31 15:16:43 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		eval_expr(char *s);
int		ops(int num1, int num2, char op);
void	nummem(char *s, char *numstack, int *pos);
void	opmem(char *s, char *opstack, int *pos);
int		ifs(char *s, int i, int *pos, char *numstack, char *opstack);
int		coolstuff(char *ns, char *os, int *pos);

#endif