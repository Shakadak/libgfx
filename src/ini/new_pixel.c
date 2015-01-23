/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 14:55:45 by npineau           #+#    #+#             */
/*   Updated: 2015/01/23 14:55:47 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

t_pix	new_pixel(t_pos const pos, t_color const color)
{
	t_pix	new;

	new.pos = pos;
	new.color = color;
	return (color);
}
