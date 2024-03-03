/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 04:54:40 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/08 06:06:46 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
char rot_13(char c)
{
	if ((c >= 'a' && c <= 'm') || ( c >= 'A' && c <= 'M'))
	{
		return (c + 13);
	}
	else if ((c >= 'n' && c <= 'z') || ( c >= 'N' && c <= 'Z'))
	{
		return (c - 13);
	}
	else
	{
		return (c);
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		i = 0;
		while (argv[1][i])
		{
			ft_putchar(rot_13(argv[1][i]));
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}
