/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 21:58:43 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/14 13:37:11 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//USUNAC 97 LINIE PRINTF
//USUNAC 97 LINIE PRINTF
//USUNAC 97 LINIE PRINTF
//USUNAC 97 LINIE PRINTF
//USUNAC 97 LINIE PRINTF
//USUNAC 97 LINIE PRINTF
//USUNAC 97 LINIE PRINTF
//USUNAC 97 LINIE PRINTF
//USUNAC 97 LINIE PRINTF

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
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

int	extract_lines(char *str, int i)
{
	int			lines;
	char		*num_str;

	num_str = malloc(i + 1);
	if (!num_str)
		return (0);
	num_str[0] = '\0';
	ft_strncpy(num_str, str, (i + 1));
	num_str[i + 1] = '\0';
	lines = ft_atoi(num_str);
	free(num_str);
	return (lines);
}

int	find_last_char(char *content)
{
	int	i;

	i = 0;
	while (content[i] && content[i] != '\n')
		i++;
	return (i);
}

char	extract_char(char *content, int *index)
{
	char	c;

	c = content[*index];
	(*index)++;
	return (c);
}

int	extract_data(char *content)
{
	int			lines;
	int			j;
	int			end_of_first_line;
	char		full;
	char		obs;
	char		emp;

	j = 0;
	end_of_first_line = find_last_char(content);
	if (end_of_first_line < 4)
		return (0);
	full = content[end_of_first_line - 1];
	obs = content[end_of_first_line - 2];
	emp = content[end_of_first_line - 3];
	while (j < end_of_first_line - 3)
	{
		if (content[j] < '0' || content[j] > '9')
			return (0);
		j++;
	}
	lines = extract_lines(content, end_of_first_line - 4);
	if (lines <= 0 || emp == obs || emp == full || obs == full)
		return (0);
	printf("'emp' '%c', 'obs' '%c', 'full' '%c',  %d\n", emp, obs, full, lines);
	return (1);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

// Zakładamy, że funkcje 'extract_data', 'find_last_char', 'extract_lines' itp. są zdefiniowane

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Użycie: %s <nazwa_pliku>\n", argv[0]);
        return 1;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Błąd podczas otwierania pliku");
        return 1;
    }

    char test_content[1024]; 
    ssize_t read_bytes = read(fd, test_content, sizeof(test_content) - 1);
    if (read_bytes < 0) {
        perror("Błąd podczas czytania z pliku");
        close(fd);
        return 1;
    }
    test_content[read_bytes] = '\0';
    close(fd);

    int result = extract_data(test_content);
    if (result) {
        printf("Pomyślne wyodrębnienie danych.\n");
    } else {
        printf("Błąd podczas wyodrębniania danych.\n");
    }

    return 0;
}



