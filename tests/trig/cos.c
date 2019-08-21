/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cos.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 16:30:16 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 16:38:38 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>
#include <math.h>

Test(cos, test01)
{
	cr_assert(m_approx(m_cos(0), cos(0)));
}

Test(cos, test02)
{
	cr_assert(m_approx(m_cos(345), cos(345)));
}

Test(cos, test03)
{
	cr_assert(m_approx(m_cos(54), cos(54)));
}

Test(cos, test04)
{
	cr_assert(m_approx(m_cos(360 * (PI/180)), cos(360 * (PI/180))));
}

Test(cos, test05)
{
	cr_assert(m_approx(m_cos(45 * (PI/180)), cos(45 * (PI/180))));
}

Test(cos, test06)
{
	cr_assert(m_approx(m_cos(897 * (PI/180)), cos(897 * (PI/180))));
}

Test(cos, test07)
{
	cr_assert(m_approx(m_cos(76 * (PI/180)), cos(76 * (PI/180))));
}

Test(cos, test08)
{
	cr_assert(m_approx(m_cos(23 * (PI/180)), cos(23 * (PI/180))));
}
