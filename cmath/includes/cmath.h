/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cmath.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 13:42:30 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 13:56:53 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CMATH_H
# define CMATH_H

# define PI 3.14159265359
# define PI2 6.28318530718
# define E 2.71828182845904523
# define DETAIL 25

/*
** Calc
*/

unsigned long	m_powlo(unsigned long base, unsigned long expo);
unsigned int	m_powint(unsigned int base, unsigned int expo);
unsigned long	m_sqrtlo(unsigned long nb);
unsigned int	m_sqrtint(unsigned int nb);
long			m_min(long a, long b);
double			m_min_d(double a, double b);
long			m_max(long a, long b);
double			m_max_d(double a, double b);
long			m_floor(double val);
long			m_ceil(double val);
long			m_round(double val);
double			m_abs(double a);
int				m_approx(double a, double b);
double			m_clamp01(double val);
double			m_clamp(double val, double min, double max);
double			m_lerp(double a, double b, double t);
double			m_lerpunclamped(double a, double b, double t);
double			m_lerpinverse(double a, double b, double t);
int				m_sign(double val);
float			m_perlin2d(float x, float y, float freq, float depth);
double			m_fract(double val);

/*
** Trig
*/
double			m_tan(double val);
double			m_sin(double val);
double			m_cos(double val);
double			m_log(double val);

#endif
