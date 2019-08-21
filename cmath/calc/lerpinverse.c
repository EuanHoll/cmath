/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lerpinverse.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 15:26:33 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:28:02 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"

double		m_lerpinverse(double a, double b, double t)
{
	if (t == a)
		return (0);
	return (a != b ? m_clamp01((t - a) / (b - a)) : 0);
}
