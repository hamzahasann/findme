#ifndef BSPTREE_H
#define BSPTREE_H

#include <random>
#include <cassert>

#include "Grid.h"

void BSPTree(Grid& grid, const int r1, const int c1, const int r2, const int c2,
             const int height_limit, const int width_limit);

Grid BSPTree(int width, int height, float width_limit = 0.20, float height_limit = 0.20);

#endif