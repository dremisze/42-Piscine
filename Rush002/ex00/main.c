/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:14:14 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/09 22:14:19 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	check_arguments(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Użyj: [NazwaProgramu] <liczba>\n", 30);
		return (0);
	}
	if (argv[1][0] == '-')
	{
		write(1, "Wprowadzono liczbę ujemną.\n", 27);
		return (0);
	}
	return (1);
}

FILE	*open_file(const char *file_name)
{
	FILE	*file;

	file = fopen(file_name, "r");
	if (file == NULL)
	{
		write(1, "Nie można otworzyć pliku numbers.dict.\n", 40);
	}
	return (file);
}

int	find_number(FILE *file, const char *searched_number)
{
	char	line[256];
	char	number_str[256];
	char	word[256];

	while (fgets(line, sizeof(line), file))
	{
		if (sscanf(line, "%255[^:]: %255[^\n]", number_str, word) == 2)
		{
			if (strcmp(number_str, searched_number) == 0)
			{
				write(1, word, strlen(word));
				write(1, "\n", 1);
				return (1);
			}
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	FILE	*file;

	if (!check_arguments(argc, argv))
	{
		return (1);
	}
	file = open_file("numbers.dict");
	if (file == NULL)
	{
		return (1);
	}
	if (!find_number(file, argv[1]))
	{
		write(1, "Nie znaleziono odpowiednika dla podanej liczby.\n", 49);
	}
	fclose(file);
	return (0);
}
