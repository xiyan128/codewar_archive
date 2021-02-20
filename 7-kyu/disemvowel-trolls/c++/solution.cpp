# include <string>

std::string disemvowel(std::string str)
{
  std::string result;
  for (auto i = str.begin(); i != str.end(); ++i) {
    char u = tolower(*i);
    if (!(
      u == 'a'|
      u == 'i'|
      u == 'e'|
      u == 'o'|
      u == 'u'
    )) result += *i;
  }
  return result;
}