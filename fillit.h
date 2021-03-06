/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:05:02 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/29 13:55:23 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

/*
**	Includes.
*/

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "libft.h"

/*
**	Defines.
*/

# define BUFFER_SIZE 4096
# define TETRIMINOS_SIZE 4
# define INPUT_LINE_LEN 4
# define INPUT_LINE_COUNT TETRIMINOS_SIZE
# define INPUT_TETRIMINOS_SIZE 20
# define ERROR_MSG "error"

/*
**	Types.
*/

typedef struct s_tetriminos	t_tetriminos;
typedef struct s_point		t_point;
typedef struct s_grid		t_grid;

struct						s_point
{
	int		x;
	int		y;
};

struct						s_tetriminos
{
	int		id;
	int		height;
	int		width;
	int		points_count;
	t_point	points[TETRIMINOS_SIZE];
};

struct						s_grid
{
	int				size;
	t_tetriminos	**cells;
};

/*
**	Fillit functions.
*/

int							input_parse(char *input,
										t_tetriminos *tetri,
										int count);
int							tetriminos_validate(t_tetriminos *tetri);
void						tetriminos_normalize(t_tetriminos *tetri);

t_grid						*solve(t_tetriminos *tetri, int count);
int							solve_core(t_grid *grid,
										t_tetriminos *tetri,
										int count,
										int index);

t_grid						*create_grid(int size);
void						free_grid(t_grid *grid);

void						print_grid(t_grid *grid);
t_tetriminos				*cell_at(t_grid *grid, int x, int y);
void						set_cell_at(t_grid *grid, int x, int y,
										t_tetriminos *val);
int							cells_count(t_grid *grid);
int							distance(t_point *a, t_point *b);

int							ft_abs(int n);

void						*ft_safemalloc(size_t size);

#endif
