/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tan.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 16:49:34 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 16:50:24 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>
#include <math.h>

Test(tan, test01)
{
	cr_assert(m_approx(m_tan(0), tan(0)));
}

Test(tan, test02)
{
	cr_assert(m_approx(m_tan(345), tan(345)));
}

Test(tan, test03)
{
	cr_assert(m_approx(m_tan(54), tan(54)));
}

Test(tan, test04)
{
	cr_assert(m_approx(m_tan(360 * (PI/180)), tan(360 * (PI/180))));
}

Test(tan, test05)
{
	cr_assert(m_approx(m_tan(45 * (PI/180)), tan(45 * (PI/180))));
}

Test(tan, test06)
{
	cr_assert(m_approx(m_tan(897 * (PI/180)), tan(897 * (PI/180))));
}

Test(tan, test07)
{
	cr_assert(m_approx(m_tan(76 * (PI/180)), tan(76 * (PI/180))));
}

Test(tan, test08)
{
	cr_assert(m_approx(m_tan(23 * (PI/180)), tan(23 * (PI/180))));
}
