/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   abs.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 14:50:58 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 14:51:41 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

double		abs(double a)
{
	return (a < 0 ? -a : a);
}