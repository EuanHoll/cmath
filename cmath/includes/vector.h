/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/09 17:00:27 by ehollidg       #+#    #+#                */
/*   Updated: 2019/12/09 17:00:27 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct		s_vec2
{
	float x;
	float y;
}					t_vec2;

typedef struct		s_vec3
{
	float x;
	float y;
	float z;
}					t_vec3;

float		dist_vec2(t_vec2 v0, t_vec2 v1);

#endif
