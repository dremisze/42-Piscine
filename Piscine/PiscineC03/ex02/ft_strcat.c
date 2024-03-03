/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:14:04 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/01 21:51:45 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char	*orig_dest;

	orig_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (orig_dest);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char test[100] = "Piscine";
//     test[sizeof(test) - 1] = '\0';
//     char test2[] = " is intensive...";
//     ft_strcat(test, test2);
//     printf("%s\n", test);
//     char x[100] = "Piscine";
//     char y[] = " is intensive...";
//     strcat(x, y);
//     printf("%s\n", x);
//     return 0;
// }