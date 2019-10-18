/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:30:41 by elee              #+#    #+#             */
/*   Updated: 2019/07/21 15:30:44 by elee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int		to_int(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c == '.')
		return (0);
	return (-1);
}

void	write_int(int x)
{
	char c;

	c = x + '0';
	write(1, &c, 1);
}

void	print_sudoku(int **mega_array)
{
	int y;
	int x;

	y = 1;
	while (y < 10)
	{
		x = 0;
		while (x < 9)
		{
			write_int(mega_array[y][x]);
			if (x != 8)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
	return ;
}
