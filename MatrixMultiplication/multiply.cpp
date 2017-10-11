#include <iostream>
#include"multiply.h"

using namespace std;

// FUNCTION TO GET VALUES FOR MATRIX WITH N COLUMNS
void input_matrix_N(int matrix[][N], int row)
{
  for (int i = 0 ; i < row ; i++)
  {
    int input[N];
    cout << "Type in " << N << " values for row " << i << " separated by spaces: ";

    for (int x = 0 ; x < N ; x++)
    {
      cin >> matrix[i][x];
    }
  }
}

// FUNCTION TO GET VALUES FOR MATRIX WITH R COLUMNS
void input_matrix_R(int matrix[][R], int row);

// FUNCTION TO PRINT OUT MATRIX WITH N COLUMNS
void print_matrix(int matrix[][N], int row);

// FUNCTION TO PRINT OUT MATRIX WITH R COLUMNS
void print_matrix(int matrix[][R], int row);

// FUNCTION TO FIND CROSS PRODUCT OF 2 MATRICES
void multiply_matrix(int matrix1[][N], int matrix2[][R], int product[][R],
  int matrix1_row);
