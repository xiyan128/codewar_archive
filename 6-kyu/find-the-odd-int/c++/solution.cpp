#include <vector>
#include <map>
int findOdd(const std::vector<int>& numbers){
  std::unordered_map<int, int> m;
  for (const auto &i: numbers) m[i]++;
  for (const auto &line: m)
    if (line.second & 2 != 0)
      return line.first;
}