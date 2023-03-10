/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   round.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 14:38:40 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:03:12 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"

long		m_round(double val)
{
	return ((m_abs(val) - m_abs((double)((long)val)) < 0.5)
		? m_floor(val) : m_ceil(val));
}
