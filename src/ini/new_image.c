/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:01:29 by npineau           #+#    #+#             */
/*   Updated: 2015/01/23 13:11:05 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

t_img	new_image(void *mlx, int width, int height)
{
	t_img	img;

	img.img = mlx_new_image(mlx, width, height);
	if (img.img == NULL)
		ft_fatal("mlx_new_image", 1);
	img.data = mlx_get_data_addr(img.img, &img.bits, &img.lsize, &img.endian);
	img.dim = new_pos(width, height, 0);
	return (img);
}
