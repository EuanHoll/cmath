/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sqrtint.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 13:58:16 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 16:25:23 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	m_sqrtint(unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb % 2 == 0)
		i++;
	while (i <= nb / 2)
	{
		j = i * i;
		if (j > nb)
			return (0);
		if (j == nb)
			return (i);
		i += 2;
	}
	return (0);
}
