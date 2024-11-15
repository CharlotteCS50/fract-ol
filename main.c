/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <cschnath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:29:25 by cschnath          #+#    #+#             */
/*   Updated: 2024/11/15 14:40:14 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

// This function SHOULD close the window when you press the escape key
void ft_esc_win(void *void_pointer)
{
    mlx_t *escape;
    escape = void_pointer;
    if (mlx_is_key_down(escape, MLX_KEY_ESCAPE))
        mlx_close_window(escape); 
} 

void ft_init_win(t_fractal *fractal)
{
    // Initialize MLX - This opens the window
    fractal->mlx = mlx_init(800, 600, "fract-ol", true);
    // Initialize rendering - This keeps it running
    mlx_loop(fractal->mlx); 
    if (!fractal->mlx)
            ft_printf("Error initializing MLX\n");
    mlx_loop_hook(fractal->mlx, ft_esc_win, fractal->mlx);
    /* // Make a new image
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
	} */
}

int main(int ac, char *av[])
{
    t_fractal *fractal = NULL;
    (void)av;
    (void)ac;
    ft_init_win(fractal);
}