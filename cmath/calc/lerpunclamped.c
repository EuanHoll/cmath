/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lerpunclamped.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 15:06:23 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/20 14:29:20 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

double		m_lerpunclamped(double a, double b, double t)
{
	return (a + (b - a) * t);
}
