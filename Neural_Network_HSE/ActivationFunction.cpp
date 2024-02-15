#include "ActivationFunction.h"

ActivationFunction::ActivationFunction(act_func func) {
    func_ = func;
    //TODO move конструктор
}

Vector ActivationFunction::operator()(const Vector& vec, bool is_derivative = false) {
    return func_(vec, is_derivative);
}