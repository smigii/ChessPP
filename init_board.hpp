#ifndef __INIT_BOARD__
#define __INIT_BOARD__

#include "Coordinate.hpp"

char blk_char {'#'};

std::vector<Coordinate> main_board {
Coordinate(1, 1, ' '),
Coordinate(2, 1, blk_char),
Coordinate(3, 1, ' '),
Coordinate(4, 1, blk_char),
Coordinate(5, 1, ' '),
Coordinate(6, 1, blk_char),
Coordinate(7, 1, ' '),
Coordinate(8, 1, blk_char),

Coordinate(1, 2, blk_char),
Coordinate(2, 2, ' '),
Coordinate(3, 2, blk_char),
Coordinate(4, 2, ' '),
Coordinate(5, 2, blk_char),
Coordinate(6, 2, ' '),
Coordinate(7, 2, blk_char),
Coordinate(8, 2, ' '),

Coordinate(1, 3, ' '),
Coordinate(2, 3, blk_char),
Coordinate(3, 3, ' '),
Coordinate(4, 3, blk_char),
Coordinate(5, 3, ' '),
Coordinate(6, 3, blk_char),
Coordinate(7, 3, ' '),
Coordinate(8, 3, blk_char),

Coordinate(1, 4, blk_char),
Coordinate(2, 4, ' '),
Coordinate(3, 4, blk_char),
Coordinate(4, 4, ' '),
Coordinate(5, 4, blk_char),
Coordinate(6, 4, ' '),
Coordinate(7, 4, blk_char),
Coordinate(8, 4, ' '),

Coordinate(1, 5, ' '),
Coordinate(2, 5, blk_char),
Coordinate(3, 5, ' '),
Coordinate(4, 5, blk_char),
Coordinate(5, 5, ' '),
Coordinate(6, 5, blk_char),
Coordinate(7, 5, ' '),
Coordinate(8, 5, blk_char),

Coordinate(1, 6, blk_char),
Coordinate(2, 6, ' '),
Coordinate(3, 6, blk_char),
Coordinate(4, 6, ' '),
Coordinate(5, 6, blk_char),
Coordinate(6, 6, ' '),
Coordinate(7, 6, blk_char),
Coordinate(8, 6, ' '),

Coordinate(1, 7, ' '),
Coordinate(2, 7, blk_char),
Coordinate(3, 7, ' '),
Coordinate(4, 7, blk_char),
Coordinate(5, 7, ' '),
Coordinate(6, 7, blk_char),
Coordinate(7, 7, ' '),
Coordinate(8, 7, blk_char),

Coordinate(1, 8, blk_char),
Coordinate(2, 8, ' '),
Coordinate(3, 8, blk_char),
Coordinate(4, 8, ' '),
Coordinate(5, 8, blk_char),
Coordinate(6, 8, ' '),
Coordinate(7, 8, blk_char),
Coordinate(8, 8, ' ')
};

#endif