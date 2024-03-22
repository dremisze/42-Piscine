/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:14:07 by dremisze          #+#    #+#             */
/*   Updated: 2024/03/22 19:15:10 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int				len;
	char			*tmp;
	int				i;

	i = 0;
	len = ft_strlen(s1);
	tmp = (char *)malloc(len + 1);
	if (tmp != NULL)
	{
		while (s1[i] != '\0')
		{
			tmp[i] = s1[i];
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
