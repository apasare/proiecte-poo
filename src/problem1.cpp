#include <iostream>
#include "lib/Math/Fraction.t.hpp"
#include "lib/Math/IntegerComplex.h"

using Math::Fraction;
using Math::IntegerComplex;

int main (void) {
    // IntegerComplex a, b;
    // std::cin >> a >> b;

    // std::cout << a / b;
    // a /= b;
    // std::cout << a;

    Fraction<int> a, b;

    std::cin >> a;
    b = a;
    std::cout << b;

    std::cin >> a >> b;
    bool t = a == b;
    std::cout << t << std::endl;
    std::cout << a + b;
    std::cout << a - b;
    std::cout << a * b;
    std::cout << a / b;

    return 0;
}
