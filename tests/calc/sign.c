/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sign.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 16:03:03 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 16:04:35 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(sign, zero)
{
	cr_assert(m_sign(0) == 1);
}

Test(sign, positive)
{
	cr_assert(m_sign(323) == 1);
}

Test(sign, negative)
{
	cr_assert(m_sign(-3243) == -1);
}
