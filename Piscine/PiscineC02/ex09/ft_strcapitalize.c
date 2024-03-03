/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:54:42 by dremisze          #+#    #+#             */
/*   Updated: 2023/11/30 17:08:00 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	new_word;
	unsigned int	c;
	unsigned int	i;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (new_word == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
/*#include <stdio.h>

char *ft_strcapitalize(char *str);

int main() {
    char test1[] = "salut, comment tu vas ? 
	42mots quarante-deux; cinquante+et+un";
    printf("original: %s\n", test1);
    ft_strcapitalize(test1);
    printf("changed: %s\n\n", test1);
    return 0;
}
*/
