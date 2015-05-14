/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 18:40:32 by npineau           #+#    #+#             */
/*   Updated: 2015/05/14 14:38:46 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

t_color	new_color(unsigned char const b,
		unsigned char const g,
		unsigned char const r,
		unsigned char const a)
{
	t_color	new;

	new.rgb[0] = b;
	new.rgb[1] = g;
	new.rgb[2] = r;
	new.rgb[3] = a;
	return (new);
}
