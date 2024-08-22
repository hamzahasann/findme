#include "BSPTree.h"

int min_split = 30;
int max_split = 70;

void BSPTree(Grid& grid, const int r1, const int c1, const int r2, const int c2,
             const int height_limit, const int width_limit) {
  if (r2 - r1 + 1 < height_limit && c2 - c1 + 1 < width_limit) {
    grid.SetValue(r1, c1, r2, c2, 1);
    return;
  }
  int coin = rand() % 2;
  int split_ratio = rand() % (max_split - min_split + 1) + min_split;
  if ((coin == 0 && r2 - r1 + 1 >= height_limit) || (coin == 1 && c2 - c1 + 1 < width_limit)) {
    // split vertically
    int mid = r1 + (r2 - r1 + 1) * split_ratio / 100;
    BSPTree(grid, r1, c1, mid - 1, c2, height_limit, width_limit);
    BSPTree(grid, mid + 1, c1, r2, c2, height_limit, width_limit);
  } else {
    // split horizontally
    int mid = c1 + (c2 - c1 + 1) * split_ratio / 100;
    BSPTree(grid, r1, c1, r2, mid - 1, height_limit, width_limit);
    BSPTree(grid, r1, mid + 1, r2, c2, height_limit, width_limit);
  }
}
Grid BSPTree(int width, int height, float width_limit, float height_limit) {
  Grid grid(width, height, 0);
  BSPTree(grid, 0, 0, height - 1, width - 1, height_limit * height, width_limit * width);
  return grid;
}
