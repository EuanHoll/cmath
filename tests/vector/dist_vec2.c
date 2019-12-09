/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dist_vec2.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/09 17:25:18 by ehollidg       #+#    #+#                */
/*   Updated: 2019/12/09 17:25:18 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(dist_vec2, test01)
{
	cr_assert(dist_vec2((t_vec2){0, 1}, (t_vec2){0, 0}) == 1);
}

Test(dist_vec2, test02)
{
	cr_assert(dist_vec2((t_vec2){0, -1}, (t_vec2){0, 0}) == 1);
}

Test(dist_vec2, test03)
{
	cr_assert(dist_vec2((t_vec2){1, 0}, (t_vec2){0, 0}) == 1);
}

Test(dist_vec2, test04)
{
	cr_assert(dist_vec2((t_vec2){-1, 0}, (t_vec2){0, 0}) == 1);
}

Test(dist_vec2, test05)
{
	cr_assert(dist_vec2((t_vec2){0, 0}, (t_vec2){0, 1}) == 1);
}

Test(dist_vec2, test06)
{
	cr_assert(dist_vec2((t_vec2){0, 0}, (t_vec2){0, -1}) == 1);
}

Test(dist_vec2, test07)
{
	cr_assert(dist_vec2((t_vec2){0, 0}, (t_vec2){1, 0}) == 1);
}

Test(dist_vec2, test08)
{
	cr_assert(dist_vec2((t_vec2){0, 0}, (t_vec2){-1, 0}) == 1);
}

Test(dist_vec2, test09)
{
	cr_assert(dist_vec2((t_vec2){0, 0}, (t_vec2){0, 0}) == 0);
}
