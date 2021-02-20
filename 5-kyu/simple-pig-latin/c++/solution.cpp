std::string pig_it(std::string str)
{
  std::vector<std::string> words;
  std::istringstream iss(str);
  std::string s;
  while ( getline( iss, s, ' ' ) ) {
    if (!ispunct(s[0])) {
      s.push_back(s[0]);
      s += "ay";
      words.push_back(s.substr(1, s.size() - 1));
    } else words.push_back(s);
  }
  std::stringstream ss;
  copy(words.begin(),words.end(), std::ostream_iterator<std::string>(ss, " "));
  return ss.str().substr(0, ss.str().size() - 1);
}