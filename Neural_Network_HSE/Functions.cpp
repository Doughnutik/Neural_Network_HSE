#include "Functions.h"

Vector Sigmoida::operator()(const Vector& vec, bool is_derivative = false) {
    auto f{ [](double d) -> double {return 1 / (1 + exp(-d));}};
    Vector new_vec = vec;
    for (size_t i = 0; i < vec.Size(); ++i) {
        if (!is_derivative) {
            new_vec[i] = f(new_vec[i]);
        }
        else {
            new_vec[i] = f(new_vec[i]) * (1 - f(new_vec[i]));
        }
    }
    return new_vec;
}