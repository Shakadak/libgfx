/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 13:25:45 by npineau           #+#    #+#             */
/*   Updated: 2015/01/22 13:58:36 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmlx.h"

static t_pos	delta_init(t_pos const start,
		t_pos const end)
{
	t_pos	delta;

	delta.x = (start.x - end.x >= 0 ? start.x - end.x : end.x - start.x);
	delta.y = (start.y - end.y >= 0 ? start.y - end.y : end.y - start.y);
	return (delta);
}

static t_pos	step_init(t_pos const start,
		t_pos const end)
{
	t_pos	step;

	step.x = (start.x < end.x ? 1 : -1);
	step.y = (start.y < end.y ? 1 : -1);
	return (step);
}

static void		update_pixel_pos(t_pos *current,
		t_pos const step,
		t_pos const delta,
		t_pos *error)
{
	if (error->y > -delta.x)
	{
		error->x -= delta.y;
		current->x += step.x;
	}
	if (error->y < delta.y)
	{
		error->x += delta.x;
		current->y += step.y;
	}
}

void			draw_line(t_img *img,
		t_pix const start,
		t_pix const end)
{
	t_pos	delta;
	t_pos	step;
	t_pos	error;
	t_pix	current;

	delta = delta_init(start.pos, end.pos);
	step = step_init(start.pos, end.pos);
	error.x = (delta.x > delta.y ? delta.x : -delta.y) / 2;
	current = start;
	while (current.pos.x != end.pos.x || current.pos.y != end.pos.y)
	{
		put_pixel_to_image(img, current);
		error.y = error.x;
		update_pixel_pos(&current.pos, step, delta, &error);
		current.color = linear_interpolation(current, start, end);
	}
	put_pixel_to_image(img, current);
}
