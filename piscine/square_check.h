/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_check.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:01:28 by elee              #+#    #+#             */
/*   Updated: 2019/07/21 16:02:20 by elee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_CHECK_H
# define SQUARE_CHECK_H

int		ft_strlen(char *str);
int		ychecker(int y);
int		xchecker(int x);
int		square_check(int y, int x, int **mega_array, int n);

#endif
