#include <map>

class Mix
{
public:
  static std::string mix(const std::string &s1, const std::string &s2) {
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::unordered_map<char, int> d1, d2;
    std::vector<std::string> r;
    std::string result;
    for (const auto &c: s1) d1[c]++;
    for (const auto &c: s2) d2[c]++;
    for (const auto &l: d1) {
      char c = l.first;
      int v1 = l.second;
      int v2 = d2[l.first];
      if ((v2 <= 1 && v1 <= 1) or !isalpha(c) or !islower(c)) continue;
      if (v1 < v2) continue;
      std::string f2 = 
        v1==v2 ? "=" : 
          (v1>v2 ? "1" : "2");
      std::string f1(v1, c);
      r.push_back(f2+":"+f1);
      d2.erase(c);
    }

    for (const auto &l: d2) {
      char c = l.first;
      int v2 = l.second;
      int v1 = d1[l.first];
//       std::cout << l.first << v1 << " " << v2 << std::endl;
      if ((v2 <= 1 && v1 <= 1) or !isalpha(c) or !islower(c)) continue;
      
      std::string f2 = 
        v1==v2 ? "=" : 
          (v1>v2 ? "1" : "2");
      std::string f1(v1>v2?v1:v2, c);
      r.push_back(f2+":"+f1);
    }
    
    std::sort(r.begin(), r.end(), [](const std::string &s1, const std::string &s2) -> bool
  {
    return (s1.length() == s2.length()) ? s1 < s2 : s1.length() > s2.length();
  });
    
    for (const auto &line: r) result += line + "/";
    if (!result.empty()) result.pop_back();
    return result;
  }
};
