#ifndef GRID_H
#define GRID_H

#include <iostream>
#include <vector>

struct Grid {
  std::vector<std::vector<int>> cells;  // 0 blocked, 1 free
  Grid(const int width, const int height, const int val) {
    cells.resize(height, std::vector<int>(width, val));
  }
  inline int GetWidth() { return cells[0].size(); }
  inline int GetHeight() { return cells.size(); }

  void SetValue(const int r1, const int c1, const int r2, const int c2, const int val);
};
std::ostream& operator<<(std::ostream& out, const Grid& grid);
#endif