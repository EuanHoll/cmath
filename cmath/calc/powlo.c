/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   powlo.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 13:45:15 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 16:00:35 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned long	m_powlo(unsigned long base, unsigned long expo)
{
	unsigned long i;

	if (expo == 0)
		return (1);
	i = base;
	while (expo > 1)
	{
		i *= base;
		expo--;
	}
	return (i);
}
