/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lerp.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 15:04:53 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/20 14:45:29 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"

double		m_lerp(double a, double b, double t)
{
	return (a + (b - a) * m_clamp01(t));
}
