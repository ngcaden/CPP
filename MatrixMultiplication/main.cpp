#include <iostream>
#include"multiply.h"

using namespace std;


int main()
{
  int matrix1[M][N], matrix2[N][R], product[M][R];
  cout << "INPUT FIRST (" << M << "x" << N << " MATRIX: \n";
  input_matrix_N(matrix1, M);

  // cout << "INPUT SECOND (" << N << "x" << R << " MATRIX: \n";
  // input_matrix_R(matrix2, N);
  //
  // multiply_matrix(matrix1, matrix2, product, N);
  //
  // print_matrix_N(matrix1, M);
  // cout << "TIMES";
  // print_matrix_R(matrix2, N);
  // cout << "EQUALS";
  // print_matrix_R(product, M);

  return 0;
}
