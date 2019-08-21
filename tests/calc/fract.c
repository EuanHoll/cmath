/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fract.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:06:21 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:09:47 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(fract, zero)
{
	cr_assert(m_fract(0) == 1);
}

Test(fract, one)
{
	cr_assert(m_fract(1) == 1);
}

Test(fract, minus)
{
	cr_assert(m_fract(-5) == 0);
}

Test(fract, fraction01)
{
	cr_assert(m_fract(1.5) == 1.5);
}

Test(fract, fraction02)
{
	cr_assert(m_fract(2.5) == 3.75);
}

Test(fract, fraction03)
{
	cr_assert(m_fract(4.5) == 59.0625);
}

Test(fract, int01)
{
	cr_assert(m_fract(2) == 2);
}

Test(fract, int02)
{
	cr_assert(m_fract(5) == 120);
}

Test(fract, int03)
{
	cr_assert(m_fract(3) == 6);
}
