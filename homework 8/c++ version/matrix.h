#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
using namespace std;

class Matrix {
public:
    Matrix(int rows, int cols);
    Matrix transpose() const;
    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator*(double scalar) const;
    void set(int row, int col, double value);
    void print();

private:
    int rows, cols;
    vector<vector<double>> data;
};

#endif
