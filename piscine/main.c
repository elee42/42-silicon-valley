/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:11:53 by elee              #+#    #+#             */
/*   Updated: 2019/07/21 15:20:59 by elee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "check_functions.h"
#include "square_check.h"
#include "write_functions.h"

int		recursion(int y, int x, int **mega_array);
int		solve(int **mega_array);

int		mega_check(int argc, char **argv)
{
	int	y;
	int	x;

	if (argc != 10)
		return (0);
	y = 1;
	while (y < 10)
	{
		if (ft_strlen(argv[y]) != 9)
			return (0);
		x = 0;
		while (x < 9)
		{
			if ((argv[y][x] < '0' || argv[y][x] > '9') && argv[y][x] != '.')
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

// I'm most proud of the below three functions, which utilize backtracking recursion:

int		recursion(int y, int x, int **mega_array)
{
	int n;

	n = 1;
	while (n <= 9)
	{
		if (super_check(y, x, mega_array, n))
		{
			mega_array[y][x] = n;
			if (solve(mega_array) == 1)
				return (1);
			mega_array[y][x] = 0;
		}
		n++;
	}
	return (0);
}

int		solve(int **mega_array)
{
	int	y;
	int	x;

	y = 1;
	while (y < 10)
	{
		x = 0;
		while (x < 9)
		{
			if (check_legit(y, x, mega_array))
				return (recursion(y, x, mega_array));
			else
				x++;
		}
		y++;
	}
	return (1);
}

void	hero_solve(int **mega_array)
{
	if (solve(mega_array))
		print_sudoku(mega_array);
	else
		ft_putstr("Error\n");
}

int		main(int argc, char **argv)
{
	int	x;
	int	y;
	int	**mega_array;

	if (!mega_check(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	mega_array = (int **)malloc(sizeof(int*) * 9);
	y = 1;
	while (y < 10)
	{
		x = 0;
		mega_array[y] = (int*)malloc(sizeof(int) * 9);
		while (argv[y][x] != '\0')
		{
			mega_array[y][x] = to_int(argv[y][x]);
			x++;
		}
		y++;
	}
	hero_solve(mega_array);
	return (0);
}
