/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 04:17:06 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/08 04:17:09 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		int i;
		i = 0;
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] < 'z') || (argv[1][i] >= 'A' && argv[1][i] < 'Z'))
			{
				ft_putchar(argv[1][i] + 1);
			}
			else if (argv[1][i] == 'z')
			{
				ft_putchar('a');
			}
			else if (argv[1][i] == 'Z')
			{
				ft_putchar('A');
			}
			else
			{
				ft_putchar(argv[1][i]);
			}
			i++;
		}
		ft_putchar('\n');
	}
	return 0;
}
