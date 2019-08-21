/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   perlin2d.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 15:39:03 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 16:01:04 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(perlin2d, zero01)
{
	float perlin;

	perlin = m_perlin2d(0, 5, 3, 3);
	cr_assert(perlin <= 1 && perlin >= 0);
}

Test(perlin2d, zero02)
{
	float perlin;

	perlin = m_perlin2d(5, 0, 3, 3);
	cr_assert(perlin <= 1 && perlin >= 0);
}

Test(perlin2d, zero03)
{
	float perlin;

	perlin = m_perlin2d(0, 0, 3, 3);
	cr_assert(perlin <= 1 && perlin >= 0);
}

Test(perlin2d, zero04)
{
	float perlin;

	perlin = m_perlin2d(5, 5, 0, 3);
	cr_assert(perlin <= 1 && perlin >= 0);
}

Test(perlin2d, zero05)
{
	float perlin;

	perlin = m_perlin2d(5, 5, 3, 0);
	cr_assert(perlin <= 1 && perlin >= 0);
}

Test(perlin2d, coords01)
{
	float perlin;

	perlin = m_perlin2d(453456, 45635456, 3, 3);
	cr_assert(perlin <= 1 && perlin >= 0);
}

Test(perlin2d, coords02)
{
	float perlin;

	perlin = m_perlin2d(-453456, 45635456, 3, 3);
	cr_assert(perlin <= 1 && perlin >= 0);
}

Test(perlin2d, coords03)
{
	float perlin;

	perlin = m_perlin2d(453456, -45635456, 3, 3);
	cr_assert(perlin <= 1 && perlin >= 0);
}

Test(perlin2d, coords04)
{
	float perlin;

	perlin = m_perlin2d(-453456, -45635456, 3, 3);
	cr_assert(perlin <= 1 && perlin >= 0);
}