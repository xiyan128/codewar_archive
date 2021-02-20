class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors) {
        std::vector<std::string> v;
        for (int i = 0; i < nFloors; i++) {
          int a = 2*i+1;
          int s = nFloors - i - 1;
          std::string str;
          for (int j = 0; j < s; j++) str += ' ';
          for (int j = 0; j < a; j++) str += '*';
          for (int j = 0; j < s; j++) str += ' ';
          v.push_back(str);
        }
        return v;
    }
};