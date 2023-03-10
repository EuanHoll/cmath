/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ceil.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 14:34:02 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 14:59:33 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

long	m_ceil(double val)
{
	if (val < 0)
		return (val != (double)((long)val) ? (long)(val - 1) : (long)val);
	return (val != (double)((long)val) ? (long)(val + 1) : (long)val);
}
