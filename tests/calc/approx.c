/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   approx.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 15:09:19 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/20 15:28:40 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(approx, zero)
{
	cr_assert(m_approx(0, 0) == 1);
}

Test(approx, positive_int_true)
{
	cr_assert(m_approx(5, 5) == 1);
}

Test(approx, positive_int_false)
{
	cr_assert(m_approx(5, 4) == 0);
}

Test(approx, negative_int_true)
{
	cr_assert(m_approx(-5, -5) == 1);
}

Test(approx, negative_int_false)
{
	cr_assert(m_approx(-5, -4) == 0);
}

Test(approx, positive_float_true)
{
	cr_assert(m_approx(5.4, 5.3999) == 1);
}

Test(approx, positive_float_false)
{
	cr_assert(m_approx(5.4, 5.38) == 0);
}

Test(approx, negative_float_true)
{
	cr_assert(m_approx(-5.4, -5.3999) == 1);
}

Test(approx, negative_float_false)
{
	cr_assert(m_approx(-5.4, -5.38) == 0);
}

Test(approx, big_diff)
{
	cr_assert(m_approx(-5.4, 5465456) == 0);
}
