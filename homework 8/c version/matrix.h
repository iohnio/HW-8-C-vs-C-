#ifndef MATRIX_H
#define MATRIX_H

#define MAX_ROWS 10
#define MAX_COLS 10

typedef struct {
    int rows;
    int cols;
    double data[MAX_ROWS][MAX_COLS];
} Matrix;

Matrix createMatrix(int rows, int cols);
void printMatrix(Matrix m);
Matrix addMatrix(Matrix a, Matrix b);
Matrix scalarMultiply(Matrix m, int scalar);
Matrix transposeMatrix(Matrix m);
Matrix multiplyMatrix(Matrix a, Matrix b);

#endif