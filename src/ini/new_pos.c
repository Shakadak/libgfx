/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 14:00:02 by npineau           #+#    #+#             */
/*   Updated: 2015/01/23 14:02:03 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libumlx.h"

t_pos	new_pos(int const x, int const y, int const z)
{
	t_pos	new;

	new.x = x;
	new.y = y;
	new.z = z;
	return (new);
}
