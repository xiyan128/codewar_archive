class RGBToHex
{
  public:
    static std::string rgb(int r, int g, int b) {
      return dec2hex(r) + dec2hex(g) + dec2hex(b);
    }
  private:
    static const std::string hex_list;
    static int round(int n) {
      if (n > 255) return 255;
      else if (n < 0) return 0;
      return n;
    }
    static std::string dec2hex(int n) {
      n = round(n);
      char d1 = n % 16;
      char d2 = (n - d1) / 16;
      return std::string({hex_list[d2], hex_list[d1]});
    }
};

const std::string RGBToHex::hex_list = "0123456789ABCDEF";