/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:28:34 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/04 17:09:22 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*#include <stdio.h>

int main()
{
    int result;
    int n;

    n = 10;
    char s1[] = "42 is the best";
    char s2[] = "42 is cool";
    printf("original s1: %s\n", s1);
    printf("original s2: %s\n", s2);
    result = ft_strncmp(s1, s2, n);
    printf("Result: %d\n", result);
    
    return (0);
}
*/
