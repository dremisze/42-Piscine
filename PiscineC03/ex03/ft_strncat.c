/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:28:36 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/02 03:39:35 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	char			*orig_dest;

	n = nb;
	orig_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (orig_dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char test[100] = "Piscine";
	test[sizeof(test) - 1] = '\0';
	char test2[] = " (cool) is intensive...";
	ft_strncat(test, test2, 4);
	printf("%s\n", test);
	return 0;
}
*/
