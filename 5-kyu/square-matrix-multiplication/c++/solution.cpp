#include <vector>

std::vector<std::vector<int>> matrix_multiplication(std::vector<std::vector<int>> &a, std::vector<std::vector<int>> &b, size_t n){
  // TODO: Return the result of A × B in the form of an n × n matrix
  // NOTE: Please allocate and return matrix C
  std::vector<std::vector<int>> result(n, std::vector<int>(n));
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      for (size_t k = 0; k < n; k++) {
        result[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  return result;
}