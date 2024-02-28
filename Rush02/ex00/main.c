#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

// Funkcja do wypisywania ciągu znaków
void ft_putstr(char *str) {
    while (*str) {
        write(1, str++, 1);
    }
}

// Własna implementacja funkcji strlen
int ft_strlen(char *str) {
    int length = 0;
    while (str[length]) length++;
    return length;
}

// Własna implementacja funkcji strncmp
int ft_strncmp(char *s1, char *s2, int n) {
    while (n-- && *s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (n < 0) ? 0 : (*s1 - *s2);
}

// Funkcja do otwierania i czytania pliku słownika
char *read_dict(char *filename) {
    int fd;
    char *buffer;
    int size = 1024;  // Przykładowy rozmiar, można dostosować

    fd = open(filename, O_RDONLY);
    if (fd < 0) return NULL;

    buffer = (char *)malloc(sizeof(char) * size);
    if (!buffer) return NULL;

    int read_bytes = read(fd, buffer, size - 1);
    if (read_bytes < 0) {
        free(buffer);
        return NULL;
    }
    buffer[read_bytes] = '\0';

    close(fd);
    return buffer;
}

// Funkcja do sprawdzania, czy argument jest liczbą
int is_number(char *str) {
    if (*str == '-') str++;
    while (*str) {
        if (*str < '0' || *str > '9') return 0;
        str++;
    }
    return 1;
}

// Funkcja do znajdowania i wypisywania wartości liczbowej
void print_number(char *dict, char *number_str) {
    char *line;
    line = dict;
    while (*line) {
        if (ft_strncmp(line, number_str, ft_strlen(number_str)) == 0 && line[ft_strlen(number_str)] == ':') {
            line += ft_strlen(number_str) + 1; // Przeskakuje liczbę i dwukropek
            while (*line == ' ') line++;  // Pomija spacje
            while (*line != '\n' && *line) write(1, line++, 1);
            write(1, "\n", 1);
            return;
        }
        while (*line && *line != '\n') line++;
        if (*line) line++;  // Przechodzi do następnej linii
    }
    ft_putstr("Number not found\n");
}

int main(int argc, char **argv) {
    if (argc != 2 || !is_number(argv[1])) {
        ft_putstr("Usage: ./program [number]\n");
        return 1;
    }

    char *dict = read_dict("numbers.dict");
    if (!dict) {
        ft_putstr("Error reading dictionary\n");
        return 1;
    }

    print_number(dict, argv[1]);
    free(dict);
    return 0;
}

