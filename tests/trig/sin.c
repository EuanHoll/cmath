/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sin.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 16:48:11 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 16:48:37 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>
#include <math.h>

Test(sin, test01)
{
	cr_assert(m_approx(m_sin(0), sin(0)));
}

Test(sin, test02)
{
	cr_assert(m_approx(m_sin(345), sin(345)));
}

Test(sin, test03)
{
	cr_assert(m_approx(m_sin(54), sin(54)));
}

Test(sin, test04)
{
	cr_assert(m_approx(m_sin(360 * (PI/180)), sin(360 * (PI/180))));
}

Test(sin, test05)
{
	cr_assert(m_approx(m_sin(45 * (PI/180)), sin(45 * (PI/180))));
}

Test(sin, test06)
{
	cr_assert(m_approx(m_sin(897 * (PI/180)), sin(897 * (PI/180))));
}

Test(sin, test07)
{
	cr_assert(m_approx(m_sin(76 * (PI/180)), sin(76 * (PI/180))));
}

Test(sin, test08)
{
	cr_assert(m_approx(m_sin(23 * (PI/180)), sin(23 * (PI/180))));
}
