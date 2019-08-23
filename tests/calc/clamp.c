/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   clamp.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 15:39:09 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/23 18:09:39 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(clamp, zero_all)
{
	cr_assert(m_clamp(0, 0, 0) == 0 );
}

Test(clamp, under)
{
	cr_assert(m_clamp(-5, 0, 5) == 0);
}

Test(clamp, above)
{
	cr_assert(m_clamp(5, -5, 0) == 0);
}

Test(clamp, reversed)
{
	cr_assert(m_clamp(4, 5, 0) == 0);
}

Test(clamp, inbetween)
{
	cr_assert(m_clamp(4, 3, 5) == 4);
}
