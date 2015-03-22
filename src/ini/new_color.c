/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 18:40:32 by npineau           #+#    #+#             */
/*   Updated: 2015/03/22 16:02:34 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

t_color	new_color(char const r, char const g, char const b, char const a)
{
	t_color	new;

	new.rgb[0] = r;
	new.rgb[1] = g;
	new.rgb[2] = b;
	new.rgb[3] = a;
	return (new);
}
