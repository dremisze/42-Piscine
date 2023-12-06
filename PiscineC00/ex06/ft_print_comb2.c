/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:09:19 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/04 15:22:46 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_character(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			print_character((char)(i / 10) + '0');
			print_character((char)(i % 10) + '0');
			print_character(' ');
			print_character((char)(j / 10) + '0');
			print_character((char)(j % 10) + '0');
			if (i != 98)
			{
				print_character(',');
				print_character(' ');
			}
		}
	}
}

/*int main()
{
	ft_print_comb2();
	return (0);
}
*/
