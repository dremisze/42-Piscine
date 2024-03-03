/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:10:29 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/13 21:13:28 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3) // Sprawdzamy, czy podano dokładnie dwa argumenty
    {
        printf("Uzycie: %s <min> <max>\n", argv[0]);
        return 1;
    }

    int min = atoi(argv[1]); // Konwertujemy argumenty na liczby całkowite
    int max = atoi(argv[2]);

    int *tab = ft_range(min, max);
    if (tab == NULL)
    {
        printf("Nie mozna utworzyc tablicy.\n");
        return 1;
    }

    // Wyświetlanie elementów tablicy
    for (int i = 0; i < (max - min); i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    free(tab); // Zwolnienie pamięci zaalokowanej przez ft_range

    return 0;
}

