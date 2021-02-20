#include <vector>
#include <string>
using namespace std;

std::vector<std::string> wave(std::string y){
  vector<string> result;
  for (int i = 0; i < y.size(); i++) {
    if (isspace(y[i])) continue;
    string waved = y;
    waved[i] = toupper(waved[i]);
    result.push_back(waved);
  }
  return result;
}