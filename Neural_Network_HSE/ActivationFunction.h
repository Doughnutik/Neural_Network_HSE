#pragma once
#include <functional>
#include <vector>
#include "LinAlg.h"

class ActivationFunction {

public:
    using act_func = std::function<Vector(const Vector&, bool is_derivative)>;
    ActivationFunction(act_func func);

    Vector operator()(const Vector& vec, bool is_derivative = false);

private:
    act_func func_;
};