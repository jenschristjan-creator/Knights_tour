#include "knights_tour.h"
#include <stdio.h>

const int MOVE_X[MOVE_COUNT] = { 2, 1, -1, -2, -2, -1,  1,  2 };
const int MOVE_Y[MOVE_COUNT] = { 1, 2,  2,  1, -1, -2, -2, -1 };

unsigned int tour_greedy(size_t start_x, size_t start_y, size_t size) {
    int board[size][size];

    // Initialiser braettet til 0 (ikke besoegt)
    for (size_t i = 0; i < size; i++)
        for (size_t j = 0; j < size; j++)
            board[i][j] = 0;

    size_t x = start_x, y = start_y;
    board[x][y] = 1; // marker startfeltet som besoegt
    unsigned int count = 1;

    while (1) {
        bool moved = false;
        for (size_t m = 0; m < MOVE_COUNT; m++) {
            int nx = x + MOVE_X[m];
            int ny = y + MOVE_Y[m];

            if (nx >= 0 && nx < (int)size &&
                ny >= 0 && ny < (int)size &&
                board[nx][ny] == 0) {

                x = nx;
                y = ny;
                board[x][y] = 1;
                count++;
                moved = true;
                break;
            }
        }
        if (!moved) break; // ingen gyldige traek tilbage
    }
    return count;
}

void greedy_tour_all_starts(size_t size) {
    printf("Greedy resultater (antal besoegte felter):\n");

    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            printf("%3u ", tour_greedy(i, j, size));
        }
        printf("\n");
    }
}
