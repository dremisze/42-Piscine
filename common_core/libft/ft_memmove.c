/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:03:17 by dremisze          #+#    #+#             */
/*   Updated: 2024/03/22 13:44:02 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;
	size_t			i;

	i = len;
	if (src == NULL && dst == NULL)
		return (NULL);
	tmp_src = (unsigned char *) src;
	tmp_dst = (unsigned char *) dst;
	if (tmp_dst < tmp_src)
	{
		ft_memcpy(tmp_dst, tmp_src, len);
	}
	else if (tmp_dst > tmp_src)
	{
		while (i > 0)
		{
			tmp_dst[i - 1] = tmp_src[i - 1];
			i--;
		}
	}
	return (dst);
}
