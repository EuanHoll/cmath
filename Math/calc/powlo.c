/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   powlo.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 13:45:15 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 13:52:46 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned long   powlo(unsigned long base, unsigned long expo)
{
    unsigned long i;

    i = base;
    while (expo > 0)
    {
        i *= base;
        expo--;
    }
    return (i);
}