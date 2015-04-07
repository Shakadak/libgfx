/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel_to_image.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 13:58:43 by npineau           #+#    #+#             */
/*   Updated: 2015/04/07 18:04:12 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libumlx.h"

void	put_pixel_to_image(t_img const img,
		t_pix const pixel)
{
	int	pos;

	pos = pixel.pos.y * img.lsize
	+ pixel.pos.x * (img.bits / 8);
	ft_memcpy(img.data + pixel.pos.y * img.lsize + pixel.pos.x * img.bits / 8,
			&pixel.color, img.bits / 8);
}
