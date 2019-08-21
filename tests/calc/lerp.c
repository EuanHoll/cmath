/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lerp.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:15:44 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:09:47 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(lerp, zero01)
{
	cr_assert(m_lerp(0, 0, 0) == 0);
}

Test(lerp, zero02)
{
	cr_assert(m_lerp(-5, 5, 0) == -5);
}

Test(lerp, zero03)
{
	cr_assert(m_lerp(5, 10, 0) == 5);
}

Test(lerp, positive01)
{
	cr_assert(m_lerp(10, 20, 0.4) == 14);
}

Test(lerp, positive02)
{
	cr_assert(m_lerp(10, 50, 0.4) == 26);
}

Test(lerp, positive03)
{
	cr_assert(m_lerp(10, 100, 0.4) == 46);
}

Test(lerp, negative01)
{
	cr_assert(m_lerp(-10, -20, 0.4) == -14);
}

Test(lerp, negative02)
{
	cr_assert(m_lerp(-10, -50, 0.4) == -26);
}

Test(lerp, negative03)
{
	cr_assert(m_lerp(-10, -100, 0.4) == -46);
}

Test(lerp, nega_pos_01)
{
	cr_assert(m_lerp(-10, 20, 0.4) == 2);
}

Test(lerp, nega_pos_02)
{
	cr_assert(m_lerp(-10, 50, 0.4) == 14);
}

Test(lerp, nega_pos_03)
{
	cr_assert(m_lerp(-10, 100, 0.4) == 34);
}
