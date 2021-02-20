int string_to_number(const std::string& s) {
  std::string::size_type sz;   // alias of size_t
  return std::stoi(s, &sz);
}