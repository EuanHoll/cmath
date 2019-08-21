/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sqrtint.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 16:08:07 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 16:13:34 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(sqrtint, zero)
{
	cr_assert(m_sqrtint(0) == 0);
}

Test(sqrtint, negative)
{
	cr_assert(m_sqrtint(-5) == 0);
}

Test(sqrtint, test01)
{
	cr_assert(m_sqrtint(4) == 2);
}

Test(sqrtint, test02)
{
	cr_assert(m_sqrtint(25) == 5);
}

Test(sqrtint, test03)
{
	cr_assert(m_sqrtint(64) == 8);
}

Test(sqrtint, test04)
{
	cr_assert(m_sqrtint(10000) == 100);
}

Test(sqrtint, test05)
{
	cr_assert(m_sqrtint(625) == 25);
}

Test(sqrtint, test06)
{
	cr_assert(m_sqrtint(4225) == 65);
}

Test(sqrtint, test07)
{
	cr_assert(m_sqrtint(422500) == 650);
}
