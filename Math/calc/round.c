/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   round.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 14:38:40 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 14:41:31 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

long		vround(double val)
{
	return ((val - (double)((long)val) < 0.5) ? (long)val : (long)(val + 1));
}
