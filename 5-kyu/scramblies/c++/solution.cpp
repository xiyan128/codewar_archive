#include<string>
#include <map>

bool scramble(const std::string& s1, const std::string& s2){
  std::unordered_map<char, int> m1, m2;
  for (char c: s1) m1[c]++;
  for (char c: s2) m2[c]++;
  for (auto l: m2)
    if (m1[l.first] < l.second)
      return false;
  return true;
}