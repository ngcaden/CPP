#ifndef MULTIPLY_H
#define MULTIPLY_H


const int M = 2;
const int N = 2;
const int R = 2;

// FUNCTION TO GET VALUES FOR MATRIX WITH N COLUMNS
void input_matrix_N(int matrix[][N], int row);

// FUNCTION TO GET VALUES FOR MATRIX WITH R COLUMNS
void input_matrix_R(int matrix[][R], int row);

// FUNCTION TO PRINT OUT MATRIX WITH N COLUMNS
void print_matrix_N(int matrix[][N], int row);

// FUNCTION TO PRINT OUT MATRIX WITH R COLUMNS
void print_matrix_R(int matrix[][R], int row);

// FUNCTION TO FIND CROSS PRODUCT OF 2 MATRICES
void multiply_matrix(int matrix1[][N], int matrix2[][R], int product[][R], int row);

#endif
