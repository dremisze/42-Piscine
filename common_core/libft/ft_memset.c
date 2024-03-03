/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:03:06 by dremisze          #+#    #+#             */
/*   Updated: 2024/03/01 06:12:40 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp_point;

	temp_point = (unsigned char *)b;
	while (len > 0)
	{
		*(temp_point++) = (unsigned char) c;
		len--;
	}
	return (b);
}
