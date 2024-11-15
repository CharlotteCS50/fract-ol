/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <cschnath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:42:08 by cschnath          #+#    #+#             */
/*   Updated: 2024/11/15 14:13:03 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define MAX 100

# include "MLX42/include/MLX42/MLX42.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <math.h>

typedef struct s_fractal
{
	double imag; // y axis
	double real; // x axis
	void	*mlx;
	void	*window;
	mlx_t	escape;
}			t_fractal;

// Calculate Mandelbrot
t_fractal	ft_square(t_fractal z);
double	ft_magnitude(t_fractal z);
int	ft_mandelbrot(double x, double y);
void	ft_draw_mandelbrot(int width, int height);

// Map to real
double ft_map_to_real(int x, int width, double min_real, double max_real);
double ft_map_to_imag(int y, int height, double min_imag, double max_imag);

// Main
void ft_esc_win(void *void_pointer);
void ft_init_win(t_fractal *fractal);

#endif