#include <stdio.h>
#include "knights_tour.h"

int main() {
    size_t board_size = 8;  // <- Aendr her for at aendre braetstørrelsen

    printf("Braetstoerrelse: %zux%zu\n", board_size, board_size);
    greedy_tour_all_starts(board_size);

    return 0;
}
