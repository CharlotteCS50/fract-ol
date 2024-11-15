NAME    = ls

CFLAGS  = -Wall -Wextra -Werror
SRC		= main.c map_to_real.c calculate_mandelbrot.c main.c
OBJ		= ${SRC:.c=.o}
LIBFT = libft/libft.a
MLX = MLX42/libmlx42.a

all: $(NAME)

$(NAME): $(MLX) $(LIBFT) $(OBJ)
	@gcc $(CFLAGS) $(OBJ) $(MLX) -lglfw -o $(NAME) $(LIBFT)

$(LIBFT):
	@make -C libft

$(MLX):
	@make -C MLX42/
clean:
	@rm -rf $(OBJ)
	@make -C MLX42/ clean
	@make -C libft/ clean

fclean: clean
	@rm -f $(NAME)
	@make -C MLX42/ fclean
	@make -C libft/ fclean

%.o: %.c
	@gcc $(CFLAGS) -o $@ -c $<

re: fclean all

.PHONY: all clean fclean re mlx42
