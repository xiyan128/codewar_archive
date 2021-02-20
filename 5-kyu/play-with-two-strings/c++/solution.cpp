#include <string>

char swap(char c) {
  if (isupper(c)) return tolower(c);
  else return toupper(c);
}

int n_occur(const char &c, const std::string &s) {
  int count = 0;
  std::string::size_type pos = 0;
  char c1 = tolower(c), c2 = toupper(c);
  std::string query{c1, c2};
  while ((pos = s.find_first_of(query, pos)) != std::string::npos) pos++, count++;
  return count;
}

std::string work_on_strings(const std::string &a, const std::string &b) {
  std::string buffer;
  for (const char &c: a) buffer.push_back(n_occur(c, b) % 2 ? swap(c) : c);
  for (const char &c: b) buffer.push_back(n_occur(c, a) % 2 ? swap(c) : c); 
  return buffer;
}