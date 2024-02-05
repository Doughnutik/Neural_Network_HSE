#pragma once
#include <functional>
#include <vector>

class ActivationFunction {

public:
    using func = std::function<std::vector<int>(std::vector<int>)>;
    ActivationFunction(func sigma, func dsigma);
    // TODO можно сделать производную необязательным аргументом. Тогда она будет вычислительно браться от sigma.

    std::vector<int> ApplySigma(const std::vector<int>& vec);

    std::vector<int> ApplyDsigma(const std::vector<int>& vec);

private:
    func sigma_, dsigma_;
};