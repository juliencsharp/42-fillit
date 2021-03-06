/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:28:47 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/20 16:29:18 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(void *ptr, int size, int step, int (f)(void*))
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (f(ptr + step * i))
			return (1);
		i++;
	}
	return (0);
}
