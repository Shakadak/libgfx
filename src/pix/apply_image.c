/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_image.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 18:45:13 by npineau           #+#    #+#             */
/*   Updated: 2015/01/23 13:11:29 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

void	apply_image(t_win const *win, t_img const *img, t_pos const origin)
{
	mlx_put_image_to_window(win->mlx, win->win, img->img, origin.x, origin.y);
}
