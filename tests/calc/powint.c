/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   powint.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 15:05:05 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:12:08 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(powint, zero01)
{
	cr_assert(m_powint(0, 0) == 1);
}

Test(powint, zero02)
{
	cr_assert(m_powint(5, 0) == 1);
}

Test(powint, zero03)
{
	cr_assert(m_powint(0, 5) == 0);
}

Test(powint, Test01)
{
	cr_assert(m_powint(5, 2) == 25);
}

Test(powint, Test02)
{
	cr_assert(m_powint(2, 2) == 4);
}

Test(powint, Test03)
{
	cr_assert(m_powint(5, 5) == 3125);
}

Test(powint, Test04)
{
	cr_assert(m_powint(5, 0) == 1);
}
