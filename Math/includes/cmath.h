/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cmath.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 13:42:30 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 14:56:59 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CMATH_H
# define CMATH_H

//Calc
unsigned long	powlo(unsigned long base, unsigned long expo);
unsigned int	powint(unsigned int base, unsigned int expo);
unsigned long	sqrtlo(unsigned long nb);
unsigned int	sqrtlo(unsigned int nb);
long			min(long a, long b);
double			min_d(double a, double b);
long			max(long a, long b);
double			max_d(double a, double b);
long			vfloor(double val);
long			vceil(double val);
long			vround(double val);
double			abs(double a);
int				aprox(double a, double b);

//Trig
double			vtan(double val);
double			vsin(double val);
double			vcos(double val);

#endif