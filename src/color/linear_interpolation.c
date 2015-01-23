/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_interpolation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 14:11:09 by npineau           #+#    #+#             */
/*   Updated: 2015/01/23 19:15:39 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

t_color	linear_interpolation(t_pix const target,
		t_pix const start,
		t_pix const end)
{
	double	se;
	double	st;
	double	et;

	se = norme(start.pos, end.pos);
	st = norme(start.pos, target.pos);
	et = norme(end.pos, target.pos);
	return (new_color(
	start.color.rgb[1] * et / se + start.color.rgb[1] * st / se,
	start.color.rgb[2] * et / se + start.color.rgb[2] * st / se,
	start.color.rgb[3] * et / se + start.color.rgb[3] * st / se));
}
