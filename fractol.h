/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <cschnath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:42:08 by cschnath          #+#    #+#             */
/*   Updated: 2024/11/11 13:30:44 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define MAX 100

# include "MLX42/include/MLX42/MLX42.h"
# include "libft/libft.h"
# include <math.h>
# include <pthread.h>

typedef struct s_fractal
{
	int		x;
	int		y;
	int		z;
	double	imag;
	double	real;
}			t_fractal;

// Use threads to make the project infinitely cooler

#endif