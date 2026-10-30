#include <array>

template<typename... Args>
int Projection::evaluate(int index, Args... args) {
    FPR::count++;
    std::array<int, sizeof...(Args)> elements{static_cast<int>(args)...};
    return elements.at(index);
}