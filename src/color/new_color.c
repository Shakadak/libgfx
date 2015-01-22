/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 18:40:32 by npineau           #+#    #+#             */
/*   Updated: 2015/01/22 18:42:14 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmlx.h"

t_color	new_color(char const r, char const g, char const b)
{
	t_color	new;

	new.rgb[1] = r;
	new.rgb[2] = g;
	new.rgb[3] = b;
	return (new);
}
