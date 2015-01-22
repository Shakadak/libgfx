/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fatal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 13:23:48 by npineau           #+#    #+#             */
/*   Updated: 2015/01/20 14:38:02 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_fatal(char const *const msg, int const flag)
{
	if (flag == 0)
		ft_putendl_fd(msg, 2);
	else
		perror(msg);
	exit(1);
}
