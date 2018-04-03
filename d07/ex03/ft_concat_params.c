/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 19:14:11 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/21 22:52:38 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_helper(char *str)
{
	int				j;

	while (str[j] != '\0')
		j++;
	return (j);
}

char	*ft_concat_params(int argc, char **argv)
{
	int					j;
	int					i;
	unsigned int		total_length;
	unsigned int		just_enough;
	char				*str;

	str += (char *)malloc(sizeof(char) * ft_helper(**argv));
	just_enough = 0;
	j = 1;
	while (just_enough != total_length)
	{
		i = 0;
		if (argv[j][i] == '\0')
			j++;
		else if (just_enough != total_length)
		{
			str[just_enough++] = argv[j][i];
			i++;
		}
		else
			return (str);
	}
}
