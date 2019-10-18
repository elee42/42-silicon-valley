/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:13:30 by elee              #+#    #+#             */
/*   Updated: 2019/07/21 16:13:34 by elee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_FUNCTIONS_H
# define CHECK_FUNCTIONS_H

int		square_check(int y, int x, int **mega_array, int n);
int		check_legit(int y, int x, int **mega_array);
int		row_check(int y, int x, int **mega_array, int n);
int		column_check(int y, int x, int **mega_array, int n);
int		super_check(int y, int x, int **mega_array, int n);

#endif
