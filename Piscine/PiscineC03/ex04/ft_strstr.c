/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 23:43:25 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/02 03:38:20 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main() {
    char str[] = "42 Warsaw is the best";
    char to_find[] = "the";

    char *result = ft_strstr(str, to_find);

    if (result) {
        printf("Znaleziono ciag: '%s'\n", result);
    } else {
        printf("Podciag nie zostal znaleziony.\n");
    }

    return 0;
}
*/
