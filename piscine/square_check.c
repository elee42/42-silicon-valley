/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squarecheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jying <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:09:16 by jying             #+#    #+#             */
/*   Updated: 2019/07/21 16:03:18 by elee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ychecker(int y)
{
	int r;

	r = 0;
	if (y >= 1 && y < 4)
		r = 1;
	else if (y < 7)
		r = 4;
	else if (y < 10)
		r = 7;
	return (r);
}

int		xchecker(int x)
{
	int r;

	r = 0;
	if (x >= 0 && x < 3)
		r = 0;
	else if (x < 6)
		r = 3;
	else if (x < 9)
		r = 6;
	return (r);
}

int		square_check(int y, int x, int **mega_array, int n)
{
	int y_p;
	int x_p;
	int y_o;
	int x_o;
	int x_bnd;

	y_o = y;
	x_o = x;
	y = ychecker(y);
	y_p = ychecker(y);
	x = xchecker(x);
	x_p = xchecker(x);
	x_bnd = x_p;
	while (y_p < y + 3)
	{
		while (x_p < x + 3)
		{
			if (y_p != y_o && x_p != x_o && n == mega_array[y_p][x_p])
				return (0);
			x_p++;
		}
		x_p = x_bnd;
		y_p++;
	}
	return (1);
}
