/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:29:46 by dremisze          #+#    #+#             */
/*   Updated: 2024/02/29 18:48:09 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize < len_dst + 1)
		return (dstsize + len_src);
	if (dstsize > len_dst + 1)
	{
		while (src[i] != '\0' && len_dst + 1 + i < dstsize)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
	}
	dst[len_dst + i] = '\0';
	printf("%s\n", dst);
	return (len_dst + len_src);
}


int main()
{
	int i = 30;
	char dtab1[4] = "42 ";
	char stab2[7] = "Warsaw";
	ft_strlcat(dtab1, stab2, i);
}