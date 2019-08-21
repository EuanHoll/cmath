/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   powlo.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 15:05:05 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:14:07 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(powlo, zero01)
{
	cr_assert(m_powlo(0, 0) == 1);
}

Test(powlo, zero02)
{
	cr_assert(m_powlo(5, 0) == 1);
}

Test(powlo, zero03)
{
	cr_assert(m_powlo(0, 5) == 0);
}

Test(powlo, Test01)
{
	cr_assert(m_powlo(5, 2) == 25);
}

Test(powlo, Test02)
{
	cr_assert(m_powlo(2, 2) == 4);
}

Test(powlo, Test03)
{
	cr_assert(m_powlo(5, 5) == 3125);
}

Test(powlo, Test04)
{
	cr_assert(m_powlo(5, 0) == 1);
}
