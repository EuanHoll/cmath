/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cmath.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 13:42:30 by ehollidg       #+#    #+#                */
/*   Updated: 2019/05/31 16:06:01 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CMATH_H
# define CMATH_H

# define PI 3.14159265359
# define PI2 6.28318530718
# define E 2.71828182845904523
# define DETAIL 25

//Calc
unsigned long	powlo(unsigned long base, unsigned long expo);
unsigned int	powint(unsigned int base, unsigned int expo);
unsigned long	sqrtlo(unsigned long nb);
unsigned int	sqrtint(unsigned int nb);
long			min(long a, long b);
double			min_d(double a, double b);
long			max(long a, long b);
double			max_d(double a, double b);
long			vfloor(double val);
long			vceil(double val);
long			vround(double val);
double			vabs(double a);
int				aprox(double a, double b);
double			clamp01(double val);
double			clamp(double val, double min, double max);
double			lerp(double a, double b, double t);
double			lerpunclamped(double a, double b, double t);
double			lerpinverse(double a, double b, double t);
int				sign(double val);
float			perlin2d(float x, float y, float freq, float depth);
double			fract(double val);

//Trig
double			vtan(double val);
double			vsin(double val);
double			vcos(double val);
double			vlog10(double val);
double			vlog(double val);

#endif