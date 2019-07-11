/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lerp.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 15:04:53 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 15:07:00 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"

double		lerp(double a, double b, double t)
{
	return (a + (b - a) * clamp01(t));
}
