/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:52:41 by dremisze          #+#    #+#             */
/*   Updated: 2023/11/29 14:52:44 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str > '9' || *str < '1')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("666"));
	printf("%d\n", ft_str_is_numeric("piscine"));
}
*/
