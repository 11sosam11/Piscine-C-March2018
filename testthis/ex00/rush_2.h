/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 22:34:47 by alyle             #+#    #+#             */
/*   Updated: 2018/04/01 19:50:11 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_2_H
# define RUSH_2_H

# define TRUE 1
# define FALSE 0

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	char				c;
	struct s_list		*next;
}					t_list;

int					g_valid_outputs;
char				*g_r00str;
int					g_r00ptr;
char				*g_r01str;
int					g_r01ptr;
char				*g_r02str;
int					g_r02ptr;
char				*g_r03str;
int					g_r03ptr;
char				*g_r04str;
int					g_r04ptr;

char				*ft_import_stdin(void);
void				ft_putnbr(int nb);
int					ft_strlen(char *str);
int					ft_strcmp(char *s1, char *s2);
void				ft_putchar(char c);
void				ft_putstr(char *str);
char				*rush00_str(int x, int y);
char				*rush01_str(int x, int y);
char				*rush02_str(int x, int y);
char				*rush03_str(int x, int y);
char				*rush04_str(int x, int y);
void				ft_check_rush(char *str);
void				output_rush00(int cols, int rows);
void				output_rush01(int cols, int rows);
void				output_rush02(int cols, int rows);
void				output_rush03(int cols, int rows);
void				output_rush04(int cols, int rows);

#endif
