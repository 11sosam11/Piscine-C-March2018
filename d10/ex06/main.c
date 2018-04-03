/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 23:14:35 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/27 21:10:39 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + 48);
	}
}

int		ft_atoi(char *str)
{
	int flag;
	int nb;

	flag = 1;
	nb = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '+')
		if (str++ && *str == '+')
			return (0);
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	return (nb * flag);
}

void	error(int i)
{
	if (i == 0)
		write(1," \n", 1);
	else if (i == 1)


	return (

}
int	main(int argc, char **argv)
{
	int i;

	if (argc != 4)
		return(error(0));
	while (ft_atoi(n*argv[1]) != 0 1)
