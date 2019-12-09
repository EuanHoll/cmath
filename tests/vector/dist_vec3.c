/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dist_vec3.c                                        :+:    :+:            */
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

Test(dist_vec3, test01)
{
	cr_assert(dist_vec3((t_vec3){0, 0, 0}, (t_vec3){0, 0, 0}) == 0);
}

Test(dist_vec3, test02)
{
	cr_assert(dist_vec3((t_vec3){1, 0, 0}, (t_vec3){0, 0, 0}) == 1);
}

Test(dist_vec3, test03)
{
	cr_assert(dist_vec3((t_vec3){-1, 0, 0}, (t_vec3){0, 0, 0}) == 1);
}

Test(dist_vec3, test04)
{
	cr_assert(dist_vec3((t_vec3){0, 1, 0}, (t_vec3){0, 0, 0}) == 1);
}

Test(dist_vec3, test05)
{
	cr_assert(dist_vec3((t_vec3){0, -1, 0}, (t_vec3){0, 0, 0}) == 1);
}

Test(dist_vec3, test06)
{
	cr_assert(dist_vec3((t_vec3){0, 0, 1}, (t_vec3){0, 0, 0}) == 1);
}

Test(dist_vec3, test07)
{
	cr_assert(dist_vec3((t_vec3){0, 0, -1}, (t_vec3){0, 0, 0}) == 1);
}

Test(dist_vec3, test08)
{
	cr_assert(dist_vec3((t_vec3){0, 0, 0}, (t_vec3){1, 0, 0}) == 1);
}

Test(dist_vec3, test09)
{
	cr_assert(dist_vec3((t_vec3){0, 0, 0}, (t_vec3){-1, 0, 0}) == 1);
}

Test(dist_vec3, test10)
{
	cr_assert(dist_vec3((t_vec3){0, 0, 0}, (t_vec3){0, 1, 0}) == 1);
}

Test(dist_vec3, test11)
{
	cr_assert(dist_vec3((t_vec3){0, 0, 0}, (t_vec3){0, -1, 0}) == 1);
}

Test(dist_vec3, test12)
{
	cr_assert(dist_vec3((t_vec3){0, 0, 0}, (t_vec3){0, 0, 1}) == 1);
}

Test(dist_vec3, test13)
{
	cr_assert(dist_vec3((t_vec3){0, 0, 0}, (t_vec3){0, 0, -1}) == 1);
}
