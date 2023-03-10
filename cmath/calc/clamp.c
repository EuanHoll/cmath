/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   clamp.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 15:01:30 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 13:25:37 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

double		m_clamp(double val, double min, double max)
{
	if (val > min && val < max)
		return (val);
	return (val > max ? max : min);
}
