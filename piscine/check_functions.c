/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions_v1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jying <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:06:27 by jying             #+#    #+#             */
/*   Updated: 2019/07/21 15:06:29 by jying            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		square_check(int y, int x, int **mega_array, int n);

int		check_legit(int y, int x, int **mega_array)
{
	if (mega_array[y][x] == 0)
		return (1);
	return (0);
}

int		row_check(int y, int x, int **mega_array, int n)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (i != x)
		{
			if (n == mega_array[y][i])
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int		column_check(int y, int x, int **mega_array, int n)
{
	int i;

	i = 1;
	while (i < 10)
	{
		if (i != y)
		{
			if (n == mega_array[i][x])
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int		super_check(int y, int x, int **mega_array, int n)
{
	int a;
	int b;
	int c;

	a = row_check(y, x, mega_array, n);
	b = column_check(y, x, mega_array, n);
	c = square_check(y, x, mega_array, n);
	if (a && b && c)
		return (1);
	return (0);
}
