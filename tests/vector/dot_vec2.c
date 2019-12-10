/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dot_vec2.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/10 12:11:30 by ehollidg       #+#    #+#                */
/*   Updated: 2019/12/10 12:11:30 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(dot_vec2, test01)
{
	cr_assert(dot_vec2((t_vec2){1, 1}, (t_vec2){1, 1}) == 2);
}

Test(dot_vec2, test02)
{
	cr_assert(dot_vec2((t_vec2){-1, -1}, (t_vec2){-1,-1}) == 2);
}

Test(dot_vec2, test03)
{
	cr_assert(dot_vec2((t_vec2){0, 0}, (t_vec2){0, 0}) == 0);
}

Test(dot_vec2, test04)
{
	cr_assert(dot_vec2((t_vec2){-1, -1}, (t_vec2){1, 1}) == -2);
}

