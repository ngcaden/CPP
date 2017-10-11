#include <iostream>
#include"multiply.h"

using namespace std;

// FUNCTION TO GET VALUES FOR MATRIX WITH N COLUMNS
void input_matrix_N(int matrix[][N], int row)
{
  for (int i = 0 ; i < row ; i++)
  {
    cout << "Type in " << N << " values for row " << (i+1) << " separated by spaces: ";

    for (int x = 0 ; x < N ; x++)
    {
      cin >> matrix[i][x];
    }
  }
}

// FUNCTION TO GET VALUES FOR MATRIX WITH R COLUMNS
void input_matrix_R(int matrix[][R], int row)
{
  for (int i = 0 ; i < row ; i++)
  {
    cout << "Type in " << R << " values for row " << (i+1) << " separated by spaces: ";

    for (int x = 0 ; x < R ; x++)
    {
      cin >> matrix[i][x];
    }
  }
}

// FUNCTION TO PRINT OUT MATRIX WITH N COLUMNS
void print_matrix_N(int matrix[][N], int row)
{
  for (int i = 0 ; i < row ; i++)
  {
    for (int x = 0 ; x < N ; x++)
    {
      cout << matrix[i][x] << " ";
    }
    cout << endl;
  }
}

// FUNCTION TO PRINT OUT MATRIX WITH R COLUMNS
void print_matrix_R(int matrix[][R], int row)
{
  for (int i = 0 ; i < row ; i++)
  {
    for (int x = 0 ; x < R ; x++)
    {
      cout << matrix[i][x] << " ";
    }
    cout << endl;
  }
}

// FUNCTION TO FIND CROSS PRODUCT OF 2 MATRICES
void multiply_matrix(int matrix1[][N], int matrix2[][R], int product[][R],
  int matrix1_row)
{
  for (int index_row1 = 0 ; index_row1 < matrix1_row ; index_row1++)
  {
    for (int index_col2 = 0 ; index_col2 < R ; index_col2++)
    {
      int temp_sum = 0;
      for (int index_col1 = 0 ; index_col1 < N ; index_col1++)
      {
        temp_sum += (matrix1[index_row1][index_col1] * matrix2[index_col1][index_col2]);
      }
      product[index_row1][index_col2] = temp_sum;
    }
  }
}
