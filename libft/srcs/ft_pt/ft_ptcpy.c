/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sregnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 14:20:50 by sregnard          #+#    #+#             */
/*   Updated: 2018/12/19 14:20:51 by sregnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"

void	ft_ptcpy(t_point *dst, t_point *src)
{
	ft_ptset(dst, src->x, src->y, src->z);
}
