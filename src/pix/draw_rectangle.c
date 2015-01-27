/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rectangle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:49:06 by npineau           #+#    #+#             */
/*   Updated: 2015/01/27 13:17:48 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

void	draw_rectangle(t_img const img, t_pix const start, t_pix const end)
{
	t_pix	top;
	t_pix	bot;

	top.pos.x = start.pos.x;
	top.pos.y = start.pos.y;
	bot.pos.x = start.pos.x;
	bot.pos.y = end.pos.y;
	top.color = start.color;
	bot.color = end.color;
	while (bot.pos.x <= end.pos.x)
	{
		draw_basic_line(img, top, bot);
		bot.pos.x += 1;
		top.pos.x += 1;
	}
}
