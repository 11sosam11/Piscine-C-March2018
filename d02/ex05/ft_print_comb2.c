/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 12:39:43 by saolivei          #+#    #+#             */
/*   Updated: 2018/03/15 12:45:25 by saolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	helper_print(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (a != '9' || b != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}

	return ;
}

//void	helper_loop_buddy(char a, char b, char c, char d)
//{

//}

//void	ft_print_comb(void)
int	main(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	while (a <= '2')
	{
		b = '0'; 
		while (b <= '9')
		{
			c = a;
			while (c <= '9')
			{
				if (b != '9')
					d = b + 1;
				while (d <= '9')
				{
					helper_print(a, b, c, d);
					d++;
				}
				c++;	
			}
			if (b == '9')
			{
				d = 0;
				c = a + 1;
			}
			b++;
		}
		a++;
	}
}
// 00  01           01    02    09   80 if b = 0, d = b;