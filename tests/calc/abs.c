/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   abs.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 12:48:02 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:09:47 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(absolute, zero)
{
	cr_assert(m_abs(0) == 0);
}

Test(absolute, negative)
{
	cr_assert(m_abs(-5) == 5);
}

Test(absolute, positive)
{
	cr_assert(m_abs(5) == 5);
}

Test(absolute, intmax)
{
	cr_assert(m_abs(INT_MAX) == INT_MAX);
}

Test(absolute, minint)
{
	cr_assert(m_abs(INT_MIN) == 2147483648);
}
