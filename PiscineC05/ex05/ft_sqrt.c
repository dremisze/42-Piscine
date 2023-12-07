/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:19:40 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/07 18:05:44 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			if (i > 46340)
				return (0);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int number = atoi(argv[1]);
		printf("Pierwiastek z %d wynosi %d\n", number,
			 ft_sqrt(number));
	}
	else
	{
		printf("Podaj jedna liczbe jako arugment.\n");
	}
	return 0;
}
*/