/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   perlin2d.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 15:45:15 by ehollidg       #+#    #+#                */
/*   Updated: 2019/08/21 16:00:02 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cmath.h"

static int		noise2(int x, int y)
{
	static int		seed = 276327645;
	static int		perms[] = { 208, 34, 231, 213, 32, 248, 233, 56, 161, 78,
	24, 140, 71, 48, 140, 254, 245, 255, 247, 247, 40, 185, 248, 251, 245, 28,
	124, 204, 204, 76, 36, 1, 107, 28, 234, 163, 202, 224, 245, 128, 167, 204,
	9, 92, 217, 54, 239, 174, 173, 102, 193, 189, 190, 121, 100, 108, 167, 44,
	43, 77, 180, 204, 8, 81, 70, 223, 11, 38, 24, 254, 210, 210, 177, 32, 81,
	195, 243, 125, 8, 169, 112, 32, 97, 53, 195, 13, 203, 9, 47, 104, 125, 117,
	114, 124, 165, 203, 181, 235, 193, 206, 70, 180, 174, 0, 167, 181, 41, 164,
	30, 116, 127, 198, 245, 146, 87, 224, 149, 206, 57, 4, 192, 210, 65, 210,
	129, 240, 178, 105, 228, 108, 245, 148, 140, 40, 35, 195, 38, 58, 65, 207,
	215, 253, 65, 85, 208, 76, 62, 3, 237, 55, 89, 232, 50, 217, 64, 244, 157,
	199, 121, 252, 90, 17, 212, 203, 149, 152, 140, 187, 234, 177, 73, 174, 193,
	100, 192, 143, 97, 53, 145, 135, 19, 103, 13, 90, 135, 151, 199, 91, 239,
	247, 33, 39, 145, 101, 120, 99, 3, 186, 86, 99, 41, 237, 203, 111, 79, 220,
	135, 158, 42, 30, 154, 120, 67, 87, 167, 135, 176, 183, 191, 253, 115, 184,
	21, 233, 58, 129, 233, 142, 39, 128, 211, 118, 137, 139, 255, 114, 20, 218,
	113, 154, 27, 127, 246, 250, 1, 8, 198, 250, 209, 92, 222, 173, 21, 88, 102,
	219};
	int				tmp;

	tmp = perms[(y + seed) % 256];
	return (perms[(tmp + x) % 256]);
}

static float	smooth(float x, float y, float s)
{
	return (x + (s * s * (3 - (2 * s))) * (y - x));
}

static float	noise2d(float x, float y)
{
	int		valarr[6];
	float	fvalarry[4];

	valarr[0] = x;
	valarr[1] = y;
	fvalarry[0] = x - valarr[0];
	fvalarry[1] = y - valarr[1];
	valarr[2] = noise2(valarr[0], valarr[1]);
	valarr[3] = noise2(valarr[0] + 1, valarr[1]);
	valarr[4] = noise2(valarr[0], valarr[1] + 1);
	valarr[5] = noise2(valarr[0] + 1, valarr[1] + 1);
	fvalarry[2] = smooth(valarr[2], valarr[3], fvalarry[0]);
	fvalarry[3] = smooth(valarr[4], valarr[5], fvalarry[0]);
	return (smooth(fvalarry[2], fvalarry[3], fvalarry[1]));
}

static void		fixnegatives(float *x, float *y, float *freq)
{
	if (x < 0 || y < 0)
		*freq *= 2;
	if (*x < 0)
		*x = m_abs(*x);
	if (*y < 0)
		*y = m_abs(*y);
}

float			m_perlin2d(float x, float y, float freq, float depth)
{
	float	fvals[5];
	int		i;

	fixnegatives(&x, &y, &freq);
	fvals[0] = x * freq;
	fvals[1] = y * freq;
	fvals[2] = 1;
	fvals[3] = 0;
	fvals[4] = 0;
	i = 0;
	while (i < depth)
	{
		fvals[4] += 256 * fvals[2];
		fvals[3] += noise2d(fvals[0], fvals[1]) * fvals[2];
		fvals[2] /= 2;
		fvals[0] *= 2;
		fvals[1] *= 2;
		i++;
	}
	if (fvals[3] == 0)
		return (0);
	return (fvals[3] / fvals[4]);
}
