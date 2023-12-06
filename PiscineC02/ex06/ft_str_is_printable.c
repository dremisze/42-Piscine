/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:27:09 by dremisze          #+#    #+#             */
/*   Updated: 2023/11/29 16:14:33 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
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
	printf("%d\n", ft_str_is_printable("abc"));
	printf("%d\n", ft_str_is_printable("123"));
	printf("%d\n", ft_str_is_printable("\x01"));
	printf("%d\n", ft_str_is_printable("\x02"));
}
*/
