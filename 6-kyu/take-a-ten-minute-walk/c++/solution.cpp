#include<vector>

bool isValidWalk(std::vector<char> walk) {
  int x = 0, y = 0;
  for (char d: walk) {
    if (d == 'n')
      y++;
    else if (d == 's')
      y--;
    else if (d == 'w')
      x--;
    else if (d == 'e')
      x++;
  }
  return !x && !y && walk.size() == 10;
}