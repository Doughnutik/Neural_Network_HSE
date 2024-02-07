#pragma once
#include <vector>

class Vector {
public:

    Vector(size_t size);

    void Init(size_t size);

    void RandomFill();

    size_t Size() const;

    double& operator[](size_t ind);

    double operator[](size_t ind) const;

    void operator += (const Vector& other);

    Vector operator + (const Vector& other) const;

    void operator -= (const Vector& other);

    Vector operator - (const Vector& other) const;

    void operator *= (double value);

    Vector operator * (double value) const;

    double operator * (const Vector& other) const;

    Vector Derivative();

private:
    size_t size_;
    std::vector<double> vec_;
};

class Matrix {
public:
    Matrix(size_t rows, size_t cols);

    void Init(size_t rows, size_t cols);

    void RandomFill();

    size_t GetRows() const;

    size_t GetCols() const;

    Vector& operator[](size_t ind);

    const Vector& operator[](size_t ind) const;

    void operator += (const Matrix& other);

    Matrix operator + (const Matrix& other) const;

    void operator -= (const Matrix& other);

    Matrix operator - (const Matrix& other) const;

    void operator *= (double value);

    Matrix operator * (double value) const;

    Vector operator * (const Vector& other) const;

    Matrix Derivative();
private:
    std::vector<Vector> matrix_;
    size_t rows_, cols_;
};