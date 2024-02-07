#include "Functions.h"

Vector Sigmoida::operator()(const Vector& vec) {
    Vector new_vec = vec;
    for (size_t i = 0; i < vec.Size(); ++i) {
        new_vec[i] = 1 / (1 + exp(-new_vec[i]));
    }
    return new_vec;
}

Matrix Sigmoida::operator()(const Matrix& mat);

Vector DSigmoida::operator()(const Vector& vec);

Matrix DSigmoida::operator()(const Matrix& mat);