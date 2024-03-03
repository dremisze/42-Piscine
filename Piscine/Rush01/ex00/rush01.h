/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:46:25 by dremisze          #+#    #+#             */
/*   Updated: 2023/12/03 14:18:43 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
#define RUSH01_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>  // Dodano dla strtok

#define SIZE 4  // Założony rozmiar planszy

// Deklaracje funkcji
void parseInput(char *input, int views[2 * SIZE]);
int solvePuzzle(int views[2 * SIZE], int board[SIZE][SIZE]);
void printBoard(int board[SIZE][SIZE]);
void initializeBoard(int board[SIZE][SIZE]);
int isValidBoard(int board[SIZE][SIZE], int views[2 * SIZE]);
int countVisibleBoxesFromStart(int *line);
int countVisibleBoxesFromEnd(int *line);
int backtrack(int board[SIZE][SIZE], int row, int col, int views[2 * SIZE]);  // Deklaracja funkcji backtrack

#endif /* RUSH01_H */