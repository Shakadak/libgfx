/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel_to_image.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 13:58:43 by npineau           #+#    #+#             */
/*   Updated: 2015/01/26 12:00:19 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

void	put_pixel_to_image(t_img const img,
		t_pix const pixel)
{
	int	pos;

	if (pixel.pos.x < 0 || pixel.pos.x >= img.width
			|| pixel.pos.y < 0 || pixel.pos.y >= img.height)
		return ;
	pos = pixel.pos.y * img.lsize
	+ pixel.pos.x * (img.bits / 8);
	img.data[pos] = pixel.color.rgb[3];
	img.data[pos + 1] = pixel.color.rgb[2];
	img.data[pos + 2] = pixel.color.rgb[1];
}
