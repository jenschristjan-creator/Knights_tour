 #ifndef KNIGHTS_TOUR_H
#define KNIGHTS_TOUR_H

#include <stddef.h>  /* size_t */
#include <stdbool.h> /* bool */

#define MOVE_COUNT 8

/* Offsets for knight moves */
extern const int MOVE_X[MOVE_COUNT];
extern const int MOVE_Y[MOVE_COUNT];

/* Funktioner */
unsigned int tour_greedy(size_t start_x, size_t start_y, size_t size);
void greedy_tour_all_starts(size_t size);

#endif
