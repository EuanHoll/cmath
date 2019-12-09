/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dist_vec3.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/09 17:36:08 by ehollidg       #+#    #+#                */
/*   Updated: 2019/12/09 17:36:08 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "vector.h"

float		dist_vec3(t_vec3 v0, t_vec3 v1)
{
	return (sqrt(pow(v1.x - v0.x, 2) + pow(v1.y - v0.y, 2) +
		pow(v1.z - v0.z, 2)));
}
