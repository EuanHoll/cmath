/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   powint.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 13:51:02 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 13:52:41 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int    powint(unsigned int base, unsigned int expo)
{
    unsigned int i;

    i = base;
    while (expo > 0)
    {
        i *= base;
        expo--;
    }
    return (i);
}