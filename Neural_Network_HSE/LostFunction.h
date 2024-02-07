#pragma once
#include <functional>

class LostFunction {
public:
    using func = std::function<int(std::vector<int>, std::vector<int>)>;
    LostFunction(func lost_func);

    int Dist(const std::vector<int>& calculated, const std::vector<int>& right);
    
private:
    func lost_func_;
};