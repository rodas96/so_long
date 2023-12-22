# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodas96 <rodas96@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 16:41:35 by rodas96           #+#    #+#              #
#    Updated: 2023/12/22 17:09:04 by rodas96          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc
#CFLAGS = -Wall -Werror -Wextra -Imlx -g -fsanitize=address,undefined
MILIB  = -I /usr/X11/include -g -L /usr/X11/lib -l minilibx-linux -framework OpenGL -framework AppKit
RM = rm -f

MLX_LIB_DIR = minilibx-linux/
MLX_INCLUDE = -I minilibx-linux/
LMLX_FLAGS = -L$(MLX_LIB_DIR) -lmlx_Linux -L/usr/lib -lXext -lX11 -lm -lz -fPIC

LIBFT_PATH = ./libft
FT_PRINTF_PATH = ./printf
GNL_PATH = ./get_next_line

LIBFT = ./libft/libft.a
FT_PRINTF = ./printf/libftprintf.a

SRC	= 	get_next_line/get_next_line.c\
		get_next_line/get_next_line_utils.c\
		main.c\
#$(VERBOSE).SILENT:

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		make bonus -C $(LIBFT_PATH)
		make -C $(FT_PRINTF_PATH)
		make -s -C minilibx-linux
		$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) $(LMLX_FLAGS) $(MLX_INCLUDE) -o $(NAME)
		echo -e "\n[compiled]"

clean:
		make clean -C $(LIBFT_PATH)
		make clean -C $(FT_PRINTF_PATH)
		$(RM) $(OBJ)
		
fclean:		clean
			make fclean -C $(LIBFT_PATH)
			make fclean -C $(FT_PRINTF_PATH)
			$(RM) $(NAME)
	
re:			fclean all