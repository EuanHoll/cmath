/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   max.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:30:24 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 14:35:26 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(max, zero01)
{
	cr_assert(m_max(0, 0) == 0);
}

Test(max, zero02)
{
	cr_assert(m_max(0, -5) == 0);
}

Test(max, zero03)
{
	cr_assert(m_max(0, 5) == 5);
}

Test(max, positive01)
{
	cr_assert(m_max(3, 15) == 15);
}

Test(max, positive02)
{
	cr_assert(m_max(40, 2) == 40);
}

Test(max, positive03)
{
	cr_assert(m_max(50, 50) == 50);
}

Test(max, negative01)
{
	cr_assert(m_max(-50, -40) == -40);
}

Test(max, negative02)
{
	cr_assert(m_max(-100, -2000) == -100);
}

Test(max, negative03)
{
	cr_assert(m_max(-200, -200) == -200);
}
