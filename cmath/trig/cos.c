/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cos.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 14:43:18 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 13:26:28 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <math.h>

double		m_cos(double val)
{
	double	ia;
	int		i;
	double	temp;

	ia = 1;
	val = fmod(val, PI2);
	if (val > PI)
	{
		val -= PI;
		ia = -1;
	}
	temp = 0.0;
	i = 0;
	while (i <= DETAIL)
	{
		temp += pow(-1, i) * (pow(val, 2 * i) / (double)m_fract(2 * i));
		i++;
	}
	return (ia * temp);
}
