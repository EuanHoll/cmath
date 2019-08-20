/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   log.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 15:32:17 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/20 14:30:35 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "cmath.h"

static double	sublog(double step, int i)
{
	double	tval;
	double	z;
	double	y;
	double	power;

	z = 1;
	power = 1;
	tval = 0;
	while (i < DETAIL)
	{
		z *= step;
		y = (1 / power) * z;
		tval += y;
		power += 2;
		i++;
	}
	return (tval * 4);
}

double			m_log(double val)
{
	double	step;
	int		i;

	i = 0;
	step = ((val - 1) * (val - 1)) / ((val + 1) * (val + 1));
	return (sublog(step, i));
}
