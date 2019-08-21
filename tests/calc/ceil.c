/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ceil.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 15:21:34 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:39:19 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(ceil, zero)
{
	cr_assert(m_ceil(0) == 0);
}

Test(ceil, positive)
{
	cr_assert(m_ceil(4.1) == 5);
}

Test(ceil, negative)
{
	cr_assert(m_ceil(-4.1) == -5);
}
