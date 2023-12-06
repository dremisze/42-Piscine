/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:48:12 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/05 22:07:14 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	 if (argc != 2)
    {
        printf("Uzycie: %s <index>\n", argv[0]);
        return 1; // Zwróć 1, aby wskazać błąd
    }
	
	int index = atoi(argv[1]);
    printf("Ciag fibonacci wynosi %d\n", ft_fibonacci(index));
    return 0;
	
}
