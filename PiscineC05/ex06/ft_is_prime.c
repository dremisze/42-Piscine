/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:58:01 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/06 19:28:42 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 1 || nb == 0)
	{
		return (0);
	}
	i = 2;
	while (i * i <= nb)
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

i#include <stdio.h>

int main()
{
    int nb;
	nb = 3;
    if (ft_is_prime(nb))
    {
        printf("Liczba %d jest liczba pierwsza\n", nb);
    }
    else
    {
        printf("Liczba %d nie jest liczba pierwsza\n", nb);
    }
    return 0;
}
*/