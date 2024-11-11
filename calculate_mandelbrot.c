/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_mandelbrot.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <cschnath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:41:43 by cschnath          #+#    #+#             */
/*   Updated: 2024/11/11 13:31:54 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

// Define fractal struct in header file
void    calculate_mandelbrot(t_fractal *fractal)
{
    // Initialize z as 0 + 0 * imag 
    // c constants are set to the coordinates of the pixel
    
    // Iterate suite until:
    // -> Abs(z) >= system's max value
    // -> Number of iterations is too high (infinite loop)

    // If suite diverges: Color it with minilibx
    // Multiply the color by the number of iterations
}