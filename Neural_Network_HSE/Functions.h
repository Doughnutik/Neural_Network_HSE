#pragma once
#include "LinAlg.h"

class Sigmoida {
public:

    Vector operator()(const Vector& vec, bool is_derivative = false);
};