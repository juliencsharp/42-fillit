/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_safemalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:37:30 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/26 12:40:24 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_safemalloc(size_t size)
{
	void	*res;

	res = ft_memalloc(size);
	if (res == NULL)
	{
		ft_putendl(MEMORY_ERROR_MSG);
		exit(1);
	}
	return (res);
}
