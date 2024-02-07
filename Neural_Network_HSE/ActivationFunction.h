#pragma once
#include <functional>
#include <vector>
#include "LinAlg.h"

class ActivationFunction {

public:
    using act_func = std::function<Vector(Vector)>;
    ActivationFunction(act_func sigma, act_func dsigma);
    // TODO можно сделать производную необязательным аргументом. Тогда она будет вычислительно браться от sigma.

    Vector ApplySigma(const Vector& vec);

    Vector ApplyDsigma(const Vector& vec);

private:
    act_func sigma_, dsigma_;
};