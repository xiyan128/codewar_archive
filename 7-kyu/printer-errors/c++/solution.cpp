class Printer
{
public:
    static std::string printerError(const std::string &s) {
      int err = 0;
      for (char c: s)
        if (c < 'a' || c > 'm')
          err++;
      return std::to_string(err) + "/" + std::to_string(s.size());
    }
};