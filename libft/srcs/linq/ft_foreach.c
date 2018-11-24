/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:25:01 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/20 16:27:32 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(void *ptr, int size, int step, void (f)(void*))
{
	int	i;

	i = 0;
	while (i < size)
	{
		f(ptr + step * i);
		i++;
	}
}