#include "Grid.h"

void Grid::SetValue(const int r1, const int c1, const int r2, const int c2, const int val) {
  for (int i = r1; i <= r2; i++)
    for (int j = c1; j <= c2; j++) cells[i][j] = val;
}

std::ostream& operator<<(std::ostream& out, const Grid& grid) {
  for (const auto& row : grid.cells) {
    for (const auto& cell : row) {
      out << (cell == 0 ? '#' : '.');
      out << ' ';
    }
    out << '\n';
  }
  return out;
}
