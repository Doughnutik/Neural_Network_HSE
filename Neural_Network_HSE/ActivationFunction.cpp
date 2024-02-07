#include "ActivationFunction.h"

ActivationFunction::ActivationFunction(act_func sigma, act_func dsigma) {
    sigma_ = sigma;
    dsigma_ = dsigma;
    //TODO move конструктор
}

Vector ActivationFunction::ApplySigma(const Vector& vec) {
    return sigma_(vec);
}

Vector ActivationFunction::ApplyDsigma(const Vector& vec) {
    return dsigma_(vec);
}