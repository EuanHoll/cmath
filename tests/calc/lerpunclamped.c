/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lerpunclamped.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 15:32:00 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:37:57 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(lerpunclamped, zero01)
{
	cr_assert(m_lerpunclamped(0, 0, 0) == 0);
}

Test(lerpunclamped, zero02)
{
	cr_assert(m_lerpunclamped(-5, 5, 0) == -5);
}

Test(lerpunclamped, zero03)
{
	cr_assert(m_lerpunclamped(5, 10, 0) == 5);
}

Test(lerpunclamped, positive01)
{
	cr_assert(m_lerpunclamped(10, 20, 0.4) == 14);
}

Test(lerpunclamped, positive02)
{
	cr_assert(m_lerpunclamped(10, 50, 0.4) == 26);
}

Test(lerpunclamped, positive03)
{
	cr_assert(m_lerpunclamped(10, 100, 0.4) == 46);
}

Test(lerpunclamped, positive04)
{
	cr_assert(m_lerpunclamped(10, 20, 1.4) == 24);
}

Test(lerpunclamped, positive05)
{
	cr_assert(m_lerpunclamped(10, 50, 1.4) == 66);
}

Test(lerpunclamped, positive06)
{
	cr_assert(m_lerpunclamped(10, 100, 1.4) == 136);
}

Test(lerpunclamped, negative01)
{
	cr_assert(m_lerpunclamped(-10, -20, 0.4) == -14);
}

Test(lerpunclamped, negative02)
{
	cr_assert(m_lerpunclamped(-10, -50, 0.4) == -26);
}

Test(lerpunclamped, negative03)
{
	cr_assert(m_lerpunclamped(-10, -100, 0.4) == -46);
}

Test(lerpunclamped, negative04)
{
	cr_assert(m_lerpunclamped(-10, -20, 1.4) == -24);
}

Test(lerpunclamped, negative05)
{
	cr_assert(m_lerpunclamped(-10, -50, 1.4) == -66);
}

Test(lerpunclamped, negative06)
{
	cr_assert(m_lerpunclamped(-10, -100, 1.4) == -136);
}

Test(lerpunclamped, nega_pos_01)
{
	cr_assert(m_lerpunclamped(-10, 20, 0.4) == 2);
}

Test(lerpunclamped, nega_pos_02)
{
	cr_assert(m_lerpunclamped(-10, 50, 0.4) == 14);
}

Test(lerpunclamped, nega_pos_03)
{
	cr_assert(m_lerpunclamped(-10, 100, 0.4) == 34);
}

Test(lerpunclamped, nega_pos_04)
{
	cr_assert(m_lerpunclamped(-10, 20, 1.4) == 32);
}

Test(lerpunclamped, nega_pos_05)
{
	cr_assert(m_lerpunclamped(-10, 50, 1.4) == 74);
}

Test(lerpunclamped, nega_pos_06)
{
	cr_assert(m_lerpunclamped(-10, 100, 1.4) == 144);
}