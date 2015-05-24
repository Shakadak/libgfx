/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_interpolation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 14:11:09 by npineau           #+#    #+#             */
/*   Updated: 2015/05/24 15:38:41 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

static double	interpolate(double const a, double const b, double const f)
{
	return ((b - a) * f + a);
}

t_color			linear_interpolation(
		t_color const src,
		t_color const end,
		double const factor)
{
	return (new_color(
	interpolate(src.rgb[0], end.rgb[0], factor),
	interpolate(src.rgb[1], end.rgb[1], factor),
	interpolate(src.rgb[2], end.rgb[2], factor),
	interpolate(src.rgb[3], end.rgb[3], factor)));
}
