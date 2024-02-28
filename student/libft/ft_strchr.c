/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:03:02 by dremisze          #+#    #+#             */
/*   Updated: 2024/02/28 18:02:07 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int z)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (z == str[i])
		{
			return ((char *) &str[i]);
		}
		i++;
	}
	return (NULL);
}
