/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_valid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:41:01 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/14 10:56:10 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h> // open, O_RDONLY
#include <stdlib.h> // malloc, free, exit
#include <unistd.h> // close, read, write, STDIN_FILENO

#define MAX_BUFFER_SIZE 10240

char	*read_stdin_content(int *file_size)
{
	int			length;
	int			total_length;
	char		*buffer;

	total_length = 0;
	buffer = malloc(MAX_BUFFER_SIZE);
	if (!buffer)
	{
		return (NULL);
	}
	while (1)
	{
		length = read(STDIN_FILENO, buffer + total_length,
				MAX_BUFFER_SIZE - total_length - 1);
		if (length <= 0)
			break ;
		total_length += length;
		if (total_length >= MAX_BUFFER_SIZE - 1)
			break ;
	}
	buffer[total_length] = '\0';
	*file_size = total_length;
	return (buffer);
}

int	get_file_size(char *filename)
{
	int			fd;
	char		c;
	int			file_size;

	file_size = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1))
		file_size++;
	close(fd);
	return (file_size);
}

char	*read_file_content(char *filename, int file_size)
{
	int			fd;
	char		*content;
	int			read_size;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	content = malloc(file_size + 1);
	if (content == NULL) //-1
	{
		close(fd);
		return (0);
	}
	read_size = read(fd, content, file_size);
	if (read_size != file_size)
	{
		free(content);
		close(fd);
		return (0);
	}
	content[file_size] = '\0';
	close(fd);
	return (content);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	extract_lines(char *str)
{
	int			number;
	int			i;
	char		*num_str;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	if (i <= 0)
	{
		return (0);
	}
	num_str = malloc(i + 1);
	if (num_str == NULL)// -1
	{
		return (0);
	}
	ft_strncpy(num_str, str, i);
	num_str[i] = '\0';
	number = ft_atoi(num_str);
	free(num_str);
	return (number);
}

#include <stdio.h> //printf

int main(int argc, char **argv) {
    char *content;
    int file_size = 0;
    int first_line_value;

    if (argc == 1) {
        // Brak argumentów, czytaj ze standardowego wejścia
        content = read_stdin_content(&file_size);
    } else {
        // Czytaj z pliku
        file_size = get_file_size(argv[1]);
        if (file_size == -1) {
            fprintf(stderr, "Błąd: Nie można otworzyć pliku.\n");
            return 1;
        }
        content = read_file_content(argv[1], file_size);
    }

    if (content == NULL) {
        fprintf(stderr, "Błąd: Nie można wczytać danych.\n");
        return 1;
    }

    first_line_value = extract_lines(content);
    if (first_line_value == -1) {
        fprintf(stderr, "Błąd: Nieprawidłowy format pierwszej linii.\n");
        free(content);
        return 1;
    }

    printf("Wartość na początku pierwszej linii: %d\n", first_line_value);

    free(content);
    return 0;
}
