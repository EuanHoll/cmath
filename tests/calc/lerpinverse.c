/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lerpinverse.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 15:16:42 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/23 18:18:41 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(lerpinverse, zero01)
{
	cr_assert(m_lerpinverse(0, 0, 0) == 0);
}

Test(lerpinverse, zero02)
{
	cr_assert(m_lerpinverse(-5, 5, -5) == 0);
}

Test(lerpinverse, zero03)
{
	cr_assert(m_lerpinverse(5, 10, 5) == 0);
}

Test(lerpinverse, positive01)
{
	cr_assert(m_lerpinverse(10, 20, 12) == 0.2);
}

Test(lerpinverse, positive02)
{
	cr_assert(m_lerpinverse(10, 50, 26) == 0.4);
}

Test(lerpinverse, positive03)
{
	cr_assert(m_lerpinverse(10, 100, 46) == 0.4);
}

Test(lerpinverse, negative01)
{
	cr_assert(m_lerpinverse(-10, -20, -14) == 0.4);
}

Test(lerpinverse, negative02)
{
	cr_assert(m_lerpinverse(-10, -50, -26) == 0.4);
}

Test(lerpinverse, negative03)
{
	cr_assert(m_lerpinverse(-10, -100, -46) == 0.4);
}

Test(lerpinverse, nega_pos_01)
{
	cr_assert(m_lerpinverse(-10, 20, 2) == 0.4);
}

Test(lerpinverse, nega_pos_02)
{
	cr_assert(m_lerpinverse(-10, 50, 14) == 0.4);
}

Test(lerpinverse, nega_pos_03)
{
	cr_assert(m_lerpinverse(-10, 100, 34) == 0.4);
}
