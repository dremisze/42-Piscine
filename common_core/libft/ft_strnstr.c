/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:21:30 by dremisze          #+#    #+#             */
/*   Updated: 2024/02/28 15:51:53 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

char	*ft_strnstr(const char *big, const char *litlle, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!*litlle)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] != '\0' && litlle[j] != '\0'
			&& big[i + j] == litlle[j] && i + j < len)
			j++;
		if (litlle[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
