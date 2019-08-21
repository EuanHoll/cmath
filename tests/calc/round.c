/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   round.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:50:05 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 15:00:07 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(round, zero01)
{
	cr_assert(m_round(0) == 0);
}

Test(round, positive01)
{
	cr_assert(m_round(5.4) == 5);
}

Test(round, negative01)
{
	cr_assert(m_round(-5.4) == -5);
}

Test(round, zero02)
{
	cr_assert(m_round(0) == 0);
}

Test(round, positive02)
{
	cr_assert(m_round(4.8) == 5);
}

Test(round, negative02)
{
	cr_assert(m_round(-4.6) == -5);
}