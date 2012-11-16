// Vector Matrix (3X2)

#include <iostream>
#include <vector>

using namespace std;

const int ROW = 3;
const int COL = 4;

typedef vector<vector<int> > matrix;

// print matrix
void print_matrix(vector<vector<int> > &myMatrix) {
  for (vector<vector<int> >::iterator it = myMatrix.begin(); it != myMatrix.end(); ++it) {
    for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); ++it2) {
      cout << *it2 << " ";
    }
    cout << endl;
  }
}
// matrix multiplication
// (2,3) * (3, 4) = (2, 4)
matrix& matrix_mul(const matrix &a, int row_a, const matrix &b, int row_b, matrix &c) {
  for (int i = 0; i < row_a; i++) 
    for (int j = 0; j < 4; j++)
      for (int k = 0; k < row_b; k++)
        c[i][j] += a[i][k] * b[k][j];

  return c;
}


int main() {
  // matrix initialization
  // vector with ROW rows, each row has COL columns with initial value of 100
  vector<vector<int> > matrix(ROW, vector<int>(COL, 100));
  // test print matrix 
  print_matrix(matrix);

  // test matrix multiplication
  vector<vector<int> > a(2, vector<int>(3, 1));
  vector<vector<int> > b(3, vector<int>(4, 2));
  vector<vector<int> > c(2, vector<int>(4));
  int row_a = 2;
  int row_b = 3;
  vector<vector<int> > result = matrix_mul(a, row_a, b, row_b, c);
  print_matrix(result);
  return 0;
}

