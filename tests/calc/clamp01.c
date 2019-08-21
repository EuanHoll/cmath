/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   clamp01.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 15:46:30 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:09:47 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(clamp01, zero)
{
	cr_assert(m_clamp01(0) == 0);
}

Test(clamp01, zero_minus)
{
	cr_assert(m_clamp01(-1) == 0);
}

Test(clamp01, one)
{
	cr_assert(m_clamp01(1) == 1);
}

Test(clamp01, one_positive)
{
	cr_assert(m_clamp01(2) == 1);
}

Test(clamp01, half)
{
	cr_assert(m_clamp01(0.5) == 0.5);
}
