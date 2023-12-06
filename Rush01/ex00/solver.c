/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:59:09 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/03 14:18:42 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"
void backtrack()
{
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
}

// int countVisibleBoxesFromStart(int *line) {
//     int max_height = 0;
//     int visible_count = 0;

//     for (int i = 0; i < SIZE; i++) {
//         if (line[i] > max_height) {
//             max_height = line[i];
//             visible_count++;
//         }
//     }

//     return visible_count;
// }


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

    // Sprawdzanie widoków kolumn
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            line[j] = board[j][i]; // Pobieranie kolumny
        }
        if (countVisibleBoxesFromStart(line) != views[i] || countVisibleBoxesFromEnd(line) != views[SIZE + i]) {
            return 0;
        }
    }

    // Sprawdzanie widoków wierszy
    for (int i = 0; i < SIZE; i++) {
        if (countVisibleBoxesFromStart(board[i]) != views[2 * SIZE + i] || countVisibleBoxesFromEnd(board[i]) != views[3 * SIZE + i]) {
            return 0;
        }
    }

    return 1; // Plansza jest poprawna
}
