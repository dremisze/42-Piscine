/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:03:02 by dremisze          #+#    #+#             */
/*   Updated: 2024/03/03 13:57:10 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int z)
{
	int	i;

	i = 0;
	
	unsigned char uc_z = (unsigned char)z;
	while (str[i] != '\0')
	{
		if (uc_z == (unsigned char)str[i])
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (uc_z == (unsigned char)str[i])
		return ((char *)&str[i]);
	return (NULL);
}

