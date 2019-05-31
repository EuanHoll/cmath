/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sqrt.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 13:54:03 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 13:57:48 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned long	sqrtlo(unsigned long nb)
{
	unsigned long i;
	unsigned long j;

	i = 1;
	j = 0;
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
