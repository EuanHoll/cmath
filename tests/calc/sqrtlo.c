/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sqrtlo.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 16:08:07 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 16:28:01 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(sqrtlo, zero)
{
	cr_assert(m_sqrtlo(0) == 0);
}

Test(sqrtlo, test01)
{
	cr_assert(m_sqrtlo(4) == 2);
}

Test(sqrtlo, test02)
{
	cr_assert(m_sqrtlo(25) == 5);
}

Test(sqrtlo, test03)
{
	cr_assert(m_sqrtlo(64) == 8);
}

Test(sqrtlo, test04)
{
	cr_assert(m_sqrtlo(10000) == 100);
}

Test(sqrtlo, test05)
{
	cr_assert(m_sqrtlo(625) == 25);
}

Test(sqrtlo, test06)
{
	cr_assert(m_sqrtlo(4225) == 65);
}

Test(sqrtlo, test07)
{
	cr_assert(m_sqrtlo(422500) == 650);
}
