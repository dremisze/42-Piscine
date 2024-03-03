/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:58:01 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/07 18:52:27 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int number = atoi(argv[1]);
		if (ft_is_prime(number))
		{
			printf("Liczba %d jest liczba pierwsza\n", number);
		}
		else
		{
        	printf("Liczba %d nie jest liczba pierwsza\n", number);
		}
	return 0;
	}
}
*/
