#pragma once
#include "LinAlg.h"

class Sigmoida {
public:

    Vector operator()(const Vector& vec);

    Matrix operator()(const Matrix& mat);
};

class DSigmoida {
public:

    Vector operator()(const Vector& vec);

    Matrix operator()(const Matrix& mat);
};