/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:47:50 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/03 14:18:47 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdio.h>

void printBoard();
void parseInput();

int main(int argc, char **argv)
{
    int views[2 * SIZE]; // Tablica przechowująca widoki z każdej strony
    int board[SIZE][SIZE]; // Plansza gry

    if (argc != 2) {
        printf("Error\n");
        return (1);
    }

    parseInput(argv[1], views);
    initializeBoard(board);

    if (solvePuzzle(views, board)) {
        printBoard(board);
    } else {
        printf("Error\n");
    }

    return (0);
}

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

void printBoard(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n"); // Nowa linia po każdym wierszu
    }
}


void initializeBoard(int board[SIZE][SIZE]) 
{
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = 0;
        }
    }
}


int solvePuzzle(int views[2 * SIZE], int board[SIZE][SIZE]) {
    return backtrack(board, 0, 0, views);
}

int backtrack(int board[SIZE][SIZE], int row, int col, int views[2 * SIZE]) {
    if (row == SIZE) {
        return isValidBoard(board, views);
    }

    int nextRow = (col == SIZE - 1) ? row + 1 : row;
    int nextCol = (col == SIZE - 1) ? 0 : col + 1;

    for (int num = 1; num <= SIZE; num++) {
        board[row][col] = num;
        if (backtrack(board, nextRow, nextCol, views)) {
            return 1;
        }
        board[row][col] = 0; // Cofamy zmianę
    }

    return 0;
}

int countVisibleBoxesFromStart(int *line) {
    int max_height = 0;
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        if (line[i] > max_height) {
            max_height = line[i];
            count++;
        }
    }

    return count;
}

int countVisibleBoxesFromEnd(int *line) {
    int max_height = 0;
    int count = 0;

    for (int i = SIZE - 1; i >= 0; i--) {
        if (line[i] > max_height) {
            max_height = line[i];
            count++;
        }
    }

    return count;
}

int isValidBoard(int board[SIZE][SIZE], int views[2 * SIZE]) {
    int line[SIZE];

    // Sprawdzenie kolumn
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            line[j] = board[j][i];
        }
        if (countVisibleBoxesFromStart(line) != views[i] || countVisibleBoxesFromEnd(line) != views[SIZE + i]) {
            return 0;
        }
    }

    // Sprawdzenie wierszy
    for (int i = 0; i < SIZE; i++) {
        if (countVisibleBoxesFromStart(board[i]) != views[2 * SIZE + i] || countVisibleBoxesFromEnd(board[i]) != views[3 * SIZE + i]) {
            return 0;
        }
    }

    return 1;
}

