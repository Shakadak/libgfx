/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_image.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 13:07:30 by npineau           #+#    #+#             */
/*   Updated: 2015/01/23 13:11:34 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"
#include "libft.h"

void	clear_image(t_img *img)
{
	ft_bzero(img->data, img->width * img->height * img->bits / 8);
}