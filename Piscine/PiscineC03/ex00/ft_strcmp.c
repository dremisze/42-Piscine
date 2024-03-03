/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:41:29 by dremisze          #+#    #+#             */
/*   Updated: 2024/02/28 16:11:30 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
#include <stdio.h>

int main()
{
    int result;

    char s1[] = "42 is c2ool";
    char s2[] = "42 is cool";
    printf("original s1: %s\n", s1);
    printf("original s2: %s\n", s2);
    result = ft_strcmp(s1, s2);
    printf("Result: %d\n", result);
    
    return (0);
}

