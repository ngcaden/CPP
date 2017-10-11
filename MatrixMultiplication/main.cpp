#include <iostream>
#include"multiply.h"

using namespace std;


int main()
{
  // Matrix declarations
  int matrix1[M][N], matrix2[N][R], product[M][R];

  // Matrix input
  cout << "INPUT FIRST (" << M << "x" << N << ") MATRIX: \n";
  input_matrix_N(matrix1, M);

  cout << "INPUT SECOND (" << N << "x" << R << ") MATRIX: \n";
  input_matrix_R(matrix2, N);

  // Matrix multiplication
  multiply_matrix(matrix1, matrix2, product, N);

  cout << endl;
  print_matrix_N(matrix1, M);
  cout << "TIMES" << endl;
  print_matrix_R(matrix2, N);
  cout << "EQUALS" << endl;
  print_matrix_R(product, M);

  return 0;
}
