/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   min_d.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:40:19 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 14:48:34 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(min_d, zero01)
{
	cr_assert(m_min_d(0, 0) == 0);
}

Test(min_d, zero02)
{
	cr_assert(m_min_d(0, -5.1) == -5.1);
}

Test(min_d, zero03)
{
	cr_assert(m_min_d(0, 5.1) == 0);
}

Test(min_d, positive01)
{
	cr_assert(m_min_d(3.2, 15.5) == 3.2);
}

Test(min_d, positive02)
{
	cr_assert(m_min_d(40.2, 2.3) == 2.3);
}

Test(min_d, positive03)
{
	cr_assert(m_min_d(50.2, 50.554) == 50.2);
}

Test(min_d, positive04)
{
	cr_assert(m_min_d(50, 50) == 50);
}

Test(min_d, negative01)
{
	cr_assert(m_min_d(-50.8, -40.8) == -50.8);
}

Test(min_d, negative02)
{
	cr_assert(m_min_d(-100.6, -2000.5) == -2000.5);
}

Test(min_d, negative03)
{
	cr_assert(m_min_d(-200.5, -200.4) == -200.5);
}

Test(min_d, negative04)
{
	cr_assert(m_min_d(-200, -200) == -200);
}
