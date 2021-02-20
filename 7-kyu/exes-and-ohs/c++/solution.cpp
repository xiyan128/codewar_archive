bool XO(const std::string& str)
{
  auto s = str;
  for (auto &c: s) c = tolower(c);
  return (std::count(s.begin(), s.end(), 'o') == std::count(s.begin(), s.end(), 'x'));
}