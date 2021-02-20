#include <set>

bool is_isogram(std::string str) {
  std::set<char> s;
  for (auto c: str) {
    s.insert(tolower(c));
  }
  return s.size() == str.size();
}