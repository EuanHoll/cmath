/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tan.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 14:47:03 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/20 14:45:08 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "cmath.h"

double		m_tan(double val)
{
	return (m_sin(val) / m_cos(val));
}
