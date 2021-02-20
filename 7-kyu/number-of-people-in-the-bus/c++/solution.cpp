#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  int n(0);
  for (auto p: busStops) n += p.first - p.second;
  return n;
}