/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   clamp.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 15:01:30 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 15:02:43 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

double		clamp(double val, double min, double max)
{
	if (val > min && val < max)
		return (val);
	return (val > max ? max : min);
}