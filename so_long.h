/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodas96 <rodas96@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:12:48 by rodas96           #+#    #+#             */
/*   Updated: 2023/12/22 17:14:25 by rodas96          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


typedef struct s_map
{
	char	**map;
	int		x;
	int		y;
	int		player_counter;
	int		collectible_counter;
	int		exit_counter;
}	t_map;

typedef struct s_img
{
	void	*img;
	int		width;
	int		height;
}	t_img;

typedef struct s_player
{
	int		x;
	int		y;
	int		moves;
}	t_player;

typedef struct s_collectible
{
	int		x;
	int		y;
}	t_collectible;



typedef struct s_data
{
	char	**map;
	void	*mlx_ptr;
	void	*win_ptr;
	int		win_size_x;
	int		win_size_y;
	void	*collectible;
	void	*exit;
	void	*player;
	void	*ground;
	void	*wall;
	void	*enemy;
	int		num;
	int		n_moves;
	int		x;
	int		y;
	int		player_counter;
	int		collectible_counter;
	int		exit_counter;
}	t_data;