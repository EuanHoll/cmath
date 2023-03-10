/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dot_vec3.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/10 12:07:58 by ehollidg       #+#    #+#                */
/*   Updated: 2019/12/10 12:07:58 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

float		dot_vec3(t_vec3 v0, t_vec3 v1)
{
	return ((v0.x * v1.x) + (v0.y * v1.y) + (v0.z * v1.z));
}
