/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_image.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 13:07:30 by npineau           #+#    #+#             */
/*   Updated: 2015/01/22 13:12:03 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmlx.h"
#include "libft.h"

void	clear_image(t_img *img)
{
	ft_bzero(img->data, img->width * img->height * img->bits / 8);
}
