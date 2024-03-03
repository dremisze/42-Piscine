/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 04:15:43 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/08 04:15:45 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char *argv[])
{
	if (argc == 3) //sprawdzamy czy liczba arg jest rowna 3 (nazwa programu + 2 stringi)
	{
		int i;
		i = 0;
		while (argv[1][i])//przechodzimy przez kazdy znak pierwszego stringu
		{
			int j;
			j = 0;
			while (argv[2][j])// jak wyzej tylko ze drugi string
			{
				if (argv[1][i] == argv[2][j])//sprawdzamy czy biezacy znak z 1-ego stringu znadjuje sie 2-im
				{
					int found;
					int k;
					found = 0;
					k = 0;
					while (k < i)
					{
						if (argv[1][i] == argv[1][k])//spr czy ten znak juz wczesnije wystapil w 1-szym ciagu
						{
							found = 1;
							break;
						}
						k++;
					}
					if (!found)
					{
						ft_putchar(argv[1][i]);
					}
					break;//przerywamy petle, poniewaz znaelzlismy dopasowanie
				}
				j++;
			}
			i++;
		}
		ft_putchar('\n');//nowa linia na koniec
	}
	else
	{
		ft_putchar('\n');//jesli liczba argumentow jest nieprawidlowa, wypisujemy tylko nowa linie
	}
	return 0;
}
/*W tym kodzie:

+Najpierw definiujemy funkcję ft_putchar, która jest używana do wypisywania pojedynczego znaku.
+Następnie w funkcji main sprawdzamy, czy liczba argumentów jest równa 3.
+Jeśli tak, przechodzimy przez każdy znak pierwszego stringu (argv[1]) 
	i porównujemy go z każdym znakiem drugiego stringu (argv[2]).
+Kiedy znajdujemy dopasowanie (czyli znak występuje w obu stringach), 
	sprawdzamy, czy ten sam znak już wcześniej wystąpił w pierwszym stringu.
+Jeśli to pierwsze wystąpienie znaku, wypisujemy go.
+Na końcu, niezależnie od wyniku porównania, wypisujemy znak nowej linii.
+Jeśli liczba argumentów jest inna niż 3, program wypisuje tylko nową linię.
*/