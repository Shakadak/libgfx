/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_interpolation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 14:11:09 by npineau           #+#    #+#             */
/*   Updated: 2015/05/23 18:08:46 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

t_color	linear_interpolation(
		t_color const src,
		t_color const end,
		double const factor)
{
	return (new_color(
	(end.rgb[0] - src.rgb[0]) * factor + src.rgb[0],
	(end.rgb[1] - src.rgb[1]) * factor + src.rgb[1],
	(end.rgb[2] - src.rgb[2]) * factor + src.rgb[2],
	(end.rgb[3] - src.rgb[3]) * factor + src.rgb[3]));
}
