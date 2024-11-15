/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_mandelbrot.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <cschnath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:41:43 by cschnath          #+#    #+#             */
/*   Updated: 2024/11/15 14:13:08 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_fractal	ft_square(t_fractal z)
{
	t_fractal	res;

	res.real = (z.real * z.real) - (z.imag * z.imag);
	res.imag = 2 * z.real * z.imag;
	return (res);
}

double	ft_magnitude(t_fractal z)
{
	// Magnitude of z / distance from origin
	return ((z.real * z.real) + (z.imag * z.imag));
}

int	ft_mandelbrot(double x, double y)
{
	int			i;

	t_fractal z = {0, 0}; // First pixel
	// c constants are set to the coordinates of the pixel
	t_fractal c = {x, y};
	i = 0;
	// Iterate suite until:
	// -> Abs(z) >= system's max value
	// -> Number of iterations is too high (infinite loop)
	while (ft_magnitude(z) <= 4 && i < MAX)
	{
		z = ft_square(z);
		z.real += c.real;
		z.imag = c.imag;
		i++;
	}
	// If suite diverges: Color it with MLX
	// Multiply the color by the number of iterations
	return (i);
}

void	ft_draw_mandelbrot(int width, int height)
{
	t_fractal *fractal;
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < height)
	{
		while (x < width)
		{
			fractal->real = ft_map_to_real(x, width, -2.0, 2.0);
			fractal->imag = ft_map_to_imag(y, height, -2.0, 2.0);
			// WORK ON THIS LINE:
			// ft_set_pixel(x, y, ft_get_color(i, MAX));
			x++;
		}
		y++;
	}
}