#include <iostream>
#include <vector>

using namespace std;

long long determinant(vector< vector<long long> > m) {
  // TODO: Return the determinant of the square matrix passed in
  auto n = m.size();
  if (n == 1) return m[0][0];
  else if (n == 2) return m[0][0] * m[1][1] - m[0][1] * m[1][0];
  long long det = 0;
  bool flag = true;
  for (int i = 0; i < n; ++i) {
    vector< vector<long long> > minor;
    for (int j = 1; j < n; ++j) {
      vector<long long> row;
      for (int k = 0; k < n; k++) {
        if (k == i) continue;
        else row.push_back(m[j][k]);
      }
      minor.push_back(row);
    }
    det += m[0][i] * (flag ? determinant(minor) : -determinant(minor));
    flag = !flag;
  }
  return det;
}