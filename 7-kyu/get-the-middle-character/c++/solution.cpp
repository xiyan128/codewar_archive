std::string get_middle(std::string input) {
  auto s = input.size();
  std::string r;
  if (s % 2 == 0) {
    r += input[s/2-1];
    r += input[s/2];
    return r;
  }
  else return std::string(1, input[s/2]);
}