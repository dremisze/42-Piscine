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
char rot_13(char c)//funkcja do szyfrowania znaku przy uzyciu metodu ROT13
{
	if ((c >= 'a' && c <= 'm') || ( c >= 'A' && c <= 'M'))//spr. czy znak c jest litera z 1-ej polowy alfabetu
	{
		return (c + 13);//przesun litere o 13 miejsc w gore w alfabecie
	}
	else if ((c >= 'n' && c <= 'z') || ( c >= 'N' && c <= 'Z'))//spr czy z drgiej polowy alfabetu
	{
		return (c - 13);//przesun o 13 w dol
	}
	else
	{
		return (c);//jesli c nie jest litera, zwroc bez zmian
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
