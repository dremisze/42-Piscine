/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:56:46 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/03 14:18:45 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

void parseInput(char *input, int views[2 * SIZE]) {
    int index = 0;
    char *token = strtok(input, " ");

    while (token != NULL && index < 2 * SIZE) {
        int view = atoi(token);
        if (view < 1 || view > SIZE) {
            fprintf(stderr, "Błąd: Nieprawidłowa wartość widoku '%d'. Powinna być w zakresie 1 do %d.\n", view, SIZE);
            exit(EXIT_FAILURE);
        }

        views[index++] = view;
        token = strtok(NULL, " ");
    }

    if (index < 2 * SIZE) {
        fprintf(stderr, "Błąd: Nieprawidłowa ilość danych wejściowych. Oczekiwano %d widoków.\n", 2 * SIZE);
        exit(EXIT_FAILURE);
    }
}