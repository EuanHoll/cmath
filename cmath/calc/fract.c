/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fract.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/11 20:46:02 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/20 14:45:37 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

double		m_fract(double val)
{
	if (val < 0)
		return (0);
	if (val <= 1)
		return (1);
	return (val * m_fract(val - 1));

}
