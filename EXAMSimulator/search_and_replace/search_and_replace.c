/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 04:27:30 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/08 04:51:32 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv [2][1] != '\0' || argv[3][1] != '\0')//sprawdz czy 2 i 3 arg sa pojedynczimi znakmai
		{
			ft_putchar('\n');
			return (0);
		}
		int i;
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
			{
				ft_putchar(argv[3][0]);
			}
			else
			{
				ft_putchar(argv[1][i]);
			}
			i++;
		}
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
	return 0;
}
