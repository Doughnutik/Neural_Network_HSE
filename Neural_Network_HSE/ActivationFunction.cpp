#include "ActivationFunction.h"

ActivationFunction::ActivationFunction(func sigma, func dsigma) : sigma_{std::move(sigma)}, dsigma_{std::move(dsigma)} {}

std::vector<int> ActivationFunction::ApplySigma(const std::vector<int>& vec) {
    return sigma_(vec);
}

std::vector<int> ActivationFunction::ApplyDsigma(const std::vector<int>& vec) {
    return dsigma_(vec);
}