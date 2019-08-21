/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   floor.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 15:52:30 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 14:57:58 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(floor, zero)
{
	cr_assert(m_floor(0) == 0);
}

Test(floor, positive)
{
	cr_assert(m_floor(5.4) == 5);
}

Test(floor, negative01)
{
	cr_assert(m_floor(-5.4) == -5);
}

Test(floor, negative02)
{
	cr_assert(m_floor(-5.6) == -5);
}
