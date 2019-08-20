/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lerpinverse.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 15:26:33 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/20 14:29:20 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"

double		m_lerpinverse(double a, double b, double t)
{
	return (a != b ? clamp01((t - a) / (b - a)) : 0);
}
