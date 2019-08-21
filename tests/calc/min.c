/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   min.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:30:24 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 14:46:30 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(min, zero01)
{
	cr_assert(m_min(0, 0) == 0);
}

Test(min, zero02)
{
	cr_assert(m_min(0, -5) == -5);
}

Test(min, zero03)
{
	cr_assert(m_min(0, 5) == 0);
}

Test(min, positive01)
{
	cr_assert(m_min(3, 15) == 3);
}

Test(min, positive02)
{
	cr_assert(m_min(40, 2) == 2);
}

Test(min, positive03)
{
	cr_assert(m_min(50, 50) == 50);
}

Test(min, negative01)
{
	cr_assert(m_min(-50, -40) == -50);
}

Test(min, negative02)
{
	cr_assert(m_min(-100, -2000) == -2000);
}

Test(min, negative03)
{
	cr_assert(m_min(-200, -200) == -200);
}
