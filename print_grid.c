/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:33:15 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/24 13:13:52 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	print_line(t_grid *grid, int y)
{
	int				i;
	t_tetriminos	*content;

	i = 0;
	while (i < grid->size)
	{
		content = cell_at(grid, i, y);
		if (content != NULL)
			ft_putchar(content->id + 'A');
		else
			ft_putchar('.');
		i++;
	}
	ft_putendl("");
}

void		print_grid(t_grid *grid)
{
	int	i;

	i = 0;
	while (i < grid->size)
	{
		print_line(grid, i);
		i++;
	}
}
