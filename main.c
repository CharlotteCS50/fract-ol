/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <cschnath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:29:25 by cschnath          #+#    #+#             */
/*   Updated: 2024/11/12 13:38:00 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Try to make a function that just opens an mlx window
#include "fractol.h"

void init_window(t_fractal *fractal)
{
    // Initialize MLX
    fractal->mlx = mlx_init(640, 360, "fract-ol", true);
    // Lets you set a custom image as the program icon, not sure if necessary
    mlx_loop(fractal->mlx); 
    if (!fractal->mlx)
            ft_printf("Error initializing MLX\n");
    // Make a new image
    fractal->mlx = mlx_new_image(fractal->mlx, 640, 360);
	if (!fractal->mlx)
	{
		mlx_close_window(fractal->mlx);
		ft_printf("Error creating new image\n");
	}
	ft_printf("Image created successfully\n");
	// Put the image in a window
    if (mlx_image_to_window(fractal->mlx, fractal->mlx, 0, 0) == -1)
	{
		mlx_close_window(fractal->mlx);
		ft_printf("Error adding image to window\n");
	}
}

int main(int ac, char *av[])
{
   t_fractal *fractal = 0;
   (void)av;
   if (ac == 1)
    init_window(fractal);
}