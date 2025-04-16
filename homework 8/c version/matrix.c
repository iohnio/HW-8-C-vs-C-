#include <stdio.h>
#include "matrix.h"

Matrix createMatrix(int rows, int cols) {
    Matrix m;
    m.rows = rows;
    m.cols = cols;
    return m;
}

void printMatrix(Matrix m) {
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            printf("%.0f ", m.data[i][j]);
        }
        printf("\n");
    }
}

Matrix addMatrix(Matrix a, Matrix b) {
    Matrix result = createMatrix(a.rows, a.cols);
    for (int i = 0; i < a.rows; i++)
        for (int j = 0; j < a.cols; j++)
            result.data[i][j] = a.data[i][j] + b.data[i][j];
    return result;
}

Matrix scalarMultiply(Matrix m, int scalar) {
    Matrix result = createMatrix(m.rows, m.cols);
    for (int i = 0; i < m.rows; i++)
        for (int j = 0; j < m.cols; j++)
            result.data[i][j] = m.data[i][j] * scalar;
    return result;
}

Matrix transposeMatrix(Matrix m) {
    Matrix result = createMatrix(m.cols, m.rows);
    for (int i = 0; i < m.rows; i++)
        for (int j = 0; j < m.cols; j++)
            result.data[j][i] = m.data[i][j];
    return result;
}

Matrix multiplyMatrix(Matrix a, Matrix b) {
    Matrix result = createMatrix(a.rows, b.cols);
    for (int i = 0; i < a.rows; i++)
        for (int j = 0; j < b.cols; j++) {
            result.data[i][j] = 0;
            for (int k = 0; k < a.cols; k++)
                result.data[i][j] += a.data[i][k] * b.data[k][j];
        }
    return result;
}
