/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:30 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/13 18:48:45 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
/*
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main() {
    int *range = NULL;
    int min = 1;
    int max = 10;
	int i;
    int size = ft_ultimate_range(&range, min, max);

	i = 0;
    if (size == -1) {
        printf("Błąd alokacji pamięci\n");
        return 1;
    } else if (size == 0) {
        printf("Pusty zakres\n");
    } else {
        printf("Rozmiar zakresu: %d\n", size);
        printf("Elementy zakresu: ");
		while (i < size)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\n");
    }
    free(range);

    return 0;
}
*/
