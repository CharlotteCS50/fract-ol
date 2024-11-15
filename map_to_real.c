/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_real.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <cschnath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:41:17 by cschnath          #+#    #+#             */
/*   Updated: 2024/11/15 13:41:35 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterate through the pixels of the window
// Calls appropriate function to draw the fractal

#include "fractol.h"

double ft_map_to_real(int x, int width, double min_real, double max_real)
{
    return(min_real + (double)x / width * (max_real - min_real));
}

double ft_map_to_imag(int y, int height, double min_imag, double max_imag)
{
    return(min_imag + (double)y / height * (max_imag - min_imag));
}