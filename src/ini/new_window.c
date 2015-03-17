/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_window.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:22:26 by npineau           #+#    #+#             */
/*   Updated: 2015/01/23 13:11:16 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

t_win	new_window(void *mlx, int width, int height, char *title)
{
	t_win	win;

	win.win = mlx_new_window(mlx, width, height, title);
	if (win.win == NULL)
		ft_fatal("mlx_new_window", 1);
	win.mlx = mlx;
	win.dim = new_pos(width, height, 0);
	win.title = title;
	return (win);
}
