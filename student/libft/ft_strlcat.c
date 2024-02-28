/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:29:46 by dremisze          #+#    #+#             */
/*   Updated: 2024/02/28 22:42:41 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	len_dst;
	int	len_src;
	int i;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= dstsize)
		return (len_dst + len_src);
	if (len_src < dstsize - len_dst)
	{
		while (src[i] != '\0')
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		//dst[len_dst + i + 1] = '\0'
	}
	return (len_dst + len_src);
}
int main()
{
	char tab[100] = "Warsaw";
	char tab2[3] = "42";
	int a = 50;
	ft_strlcat(tab, tab2, a);
	
}