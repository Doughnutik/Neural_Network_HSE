#include "ActivationFunction.h"

class Layer {

public:
    Layer();

    

private:
    std::vector<std::vector<int>> a_;
    std::vector<int> b_;
    ActivationFunction activ_func_;
};