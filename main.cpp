#include <iostream>
#include <cstdlib>
#include "math_lib.h"

int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " a b" << std::endl;
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int result = MathLib::sumSquares(a, b);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
