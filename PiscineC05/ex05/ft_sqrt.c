/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:19:40 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/06 19:52:49 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;
	int	b;
	int	middle;

	a = 0;
	b = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while (a <= b)
	{
		middle = a + (b - a) / 2;
		if (middle * middle == nb)
			return (middle);
		if (middle * middle < nb)
			a = middle + 1;
		else
			b = middle - 1;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	int i;
	int result;

	i = 4;
	result = ft_sqrt(i);
	printf("Pierwiastek z %d wynosi %d", i, result);
	return (0);
}

*/
