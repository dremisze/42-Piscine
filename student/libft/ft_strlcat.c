/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:29:46 by dremisze          #+#    #+#             */
/*   Updated: 2024/02/29 20:46:47 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (src[i - len_dst] && i < dstsize - 1)
	{
		dst[i] = src[i - len_dst];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
