/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:42:23 by mbany             #+#    #+#             */
/*   Updated: 2023/11/26 22:32:24 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw_line(int longness, char start, char middle, char end)
{
	int	i;

	i = 0;
	while (i < longness)
	{
		if (i == 0)
			ft_putchar(start);
		else
		{
			if (i == longness - 1)
				ft_putchar(end);
			else
				ft_putchar(middle);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			draw_line(x, 'A', 'B', 'C');
		else
		{
			if (i == y - 1)
				draw_line(x, 'C', 'B', 'A');
			else
				draw_line(x, 'B', ' ', 'B');
		}
		i++;
	}
}
