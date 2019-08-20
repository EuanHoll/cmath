/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tan.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 14:47:03 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 15:10:34 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "cmath.h"

double		vtan(double val)
{
	return (vsin(val) / vcos(val));
}