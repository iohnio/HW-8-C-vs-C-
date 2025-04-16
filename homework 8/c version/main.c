#include <stdio.h>
#include "matrix.h"

int main() {
    Matrix A = createMatrix(2, 2);
    Matrix B = createMatrix(2, 3);
    Matrix C = createMatrix(2, 3);

    // A
    A.data[0][0] = 6; A.data[0][1] = 4;
    A.data[1][0] = 8; A.data[1][1] = 3;

    // B
    B.data[0][0] = 1; B.data[0][1] = 2; B.data[0][2] = 3;
    B.data[1][0] = 4; B.data[1][1] = 5; B.data[1][2] = 6;

    // C
    C.data[0][0] = 2; C.data[0][1] = 4; C.data[0][2] = 6;
    C.data[1][0] = 1; C.data[1][1] = 3; C.data[1][2] = 5;

    Matrix B_scaled = scalarMultiply(B, 3);
    Matrix CT = transposeMatrix(C);
    Matrix product = multiplyMatrix(B_scaled, CT);
    Matrix D = addMatrix(A, product);

    printf("Result D = A + (3 * B) * C^T =\n");
    printMatrix(D);
    return 0;
}
