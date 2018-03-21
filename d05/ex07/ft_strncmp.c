/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:45:58 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/19 22:48:37 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int num;

	num = 0;
	while ((s1[num] == s2[num] && (s1[num] != '\0'
		|| s2[num] != '\0')) && num < n - 1)
		num++;
	return ((unsigned int)s1[num] - (unsigned int)s2[num]);
}
