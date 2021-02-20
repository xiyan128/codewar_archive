#include <map>
std::vector<int> deleteNth(std::vector<int> arr, int n)
{
  std::vector<int> result;
  std::map<int, int> m;
  for (int i: arr) {
    if (m[i] < n) {
      result.push_back(i);
    }
    m[i]++;
  }
  return result;
}