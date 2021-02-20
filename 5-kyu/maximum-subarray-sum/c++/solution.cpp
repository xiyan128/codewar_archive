#include <vector>
#define INT_MIN -2147483648

using namespace std;

int maxSequence(const vector<int>& arr){
  int res = 0, curSum = 0;
  for (int num : arr) {
    curSum = max(curSum + num, num);
    res = max(res, curSum);
  }
  return res;
}