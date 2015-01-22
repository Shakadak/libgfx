/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:01:29 by npineau           #+#    #+#             */
/*   Updated: 2015/01/22 11:06:01 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmlx.h"

t_img	new_image(void *mlx, int width, int height)
{
	t_img	img;

	img.img = mlx_new_image(mlx, width, height);
	if (img.img == NULL)
		ft_fatal("mlx_new_image", 1);
	img.data = mlx_get_data_addr(img.img, &img.bits, &img.lsize, &img.endian);
	img.width = width;
	img.height = height;
	return (img);
}
