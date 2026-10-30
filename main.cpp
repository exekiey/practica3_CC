#include <iostream>
#include <cstdlib>
#include <string>

#include "power.h"
#include "fpr.h"

int main(int argc, char* argv[]) {
    if (argc != 5 || std::string(argv[1]) != "-x" || std::string(argv[3]) != "-y") {
        std::cerr << "Uso: " << argv[0] << " -x <base> -y <exponente>\n";
        return -1;
    }

    int x = std::stoi(argv[2]);
    int y = std::stoi(argv[4]);

    if (x < 0 || y < 0) {
        std::cerr << "Error: los argumentos deben ser enteros no negativos\n";
        return -1;
    }

    int result = Power::evaluate(x, y);

    std::cout << result << '\n';
    std::cout << FPR::getCount() << '\n';

    return 0;
}