#include "LostFunction.h"

LostFunction::LostFunction(func lost_func) : lost_func_{std::move(lost_func)} {}

int LostFunction::Dist(const std::vector<int>& calculated, const std::vector<int>& right) {
    return lost_func_(calculated, right);
}