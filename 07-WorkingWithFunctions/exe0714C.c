/* exe0714C. Rewrite the functions developed in the last four exercises
 * to use global variables instead of arguments. For example, the
 * preceding exercise should sort a globally defined array.
 * by Ron, Feb 2021 */

/* exe0712. */

#include <stdio.h>

int M[4][5] = 
  {
    { 41, 92, 11, 38, 67 },
    { 34, 76,  7, 68, 45 },
    { 59, 32, 12, 71, 69 },
    { 22, 15, 81, 56, 77 }
  };
int N[5][4];


int main(void)
{
  void transposeMatrix(int nRows, int nCols, int M[nRows][nCols], int N[nCols][nRows]);
  void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
  printf("Matrix before transpose:\n");
  displayMatrix(4, 5, M);

  transposeMatrix(4, 5, M, N);

  printf("\n\nMatrix after transpose:\n");
  displayMatrix(5, 4, N);

  return 0;
} 
 
void transposeMatrix(int nRows, int nCols, int M[nRows][nCols], int N[nCols][nRows])
{
  int row, column;

  for (row = 0; row < nCols; ++row)
    for (column = 0; column < nRows; ++column)
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
