/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lerpunclamped.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 15:06:23 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 15:06:58 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

double		lerpunclamped(double a, double b, double t)
{
	return (a + (b - a) * t);
}
