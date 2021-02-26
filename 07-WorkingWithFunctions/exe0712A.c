/* exe0712A. A matrix M with i rows, j columns can be transposed into
 * a matrix N having j rows and i columns by simply setting the value of
 * N[a][b] equal to the value of M[b][a] for all relevant values of a nad b.
 * A. Write a function transposeMatrix() that takes as a argument a 4 x 5 
 * matrix. Have the function transpose the 4 x 5 matrix and store the
 * results in the 5 x 4 matrix. Also write a main() routine to test the
 * function.
 * B. Using variable-length arrays, rewrite the transposeMatrix() function
 * developed in exercise 12A to take the number of rows and columns as arguments,
 * and to transpose the matrix of the specified dimensions.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  void transposeMatrix(int M[4][5], int N[5][4]);
  void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
  int M[4][5] = 
    {
      { 41, 92, 11, 38, 67 },
      { 34, 76,  7, 68, 45 },
      { 59, 32, 12, 71, 69 },
      { 22, 15, 81, 56, 77 }
    };
  int N[5][4];

  printf("Matrix before transpose:\n");
  displayMatrix(4, 5, M);

  transposeMatrix(M, N);

  printf("\n\nMatrix after transpose:\n");
  displayMatrix(5, 4, N);

  return 0;
} 

void transposeMatrix(int M[4][5], int N[5][4])
{
  int row, column;

  for (row = 0; row < 5; ++row)
    for (column = 0; column < 4; ++column)
      N[row][column] = M[column][row];
}
  
void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
  int row, column;

  for (row = 0; row < nRows; ++row) {
    for (column = 0; column < nCols; ++column) 
      printf("%5i", matrix[row][column]);
    printf("\n");
  }
}

