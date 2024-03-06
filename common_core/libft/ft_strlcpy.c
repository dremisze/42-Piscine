/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:29:57 by dremisze          #+#    #+#             */
/*   Updated: 2024/03/06 17:23:36 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	copy_len;

	src_len = ft_strlen(src);
	if (!dst || !src)
	{
		return (0);
	}
	if (dstsize > 0)
	{
		if (src_len < dstsize - 1)
			copy_len = src_len;
		else
			copy_len = dstsize - 1;
		ft_memcpy(dst, src, copy_len);
		dst[copy_len] = '\0';
	}
	return (src_len);
}
