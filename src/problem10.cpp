#include <iostream>
#include "lib/Geometry/Punct.h"
#include "lib/Geometry/SegmentOrizontal.h"
#include "lib/Geometry/SegmentVertical.h"

using Geometry::Punct;
using Geometry::SegmentOrizontal;
using Geometry::SegmentVertical;

int main (void) {
    Vector translationVector(2, 3), scalingFactors(2, 2);

    Punct A(1, 5);
    std::cout << A;
    std::cout << translationVector;
    std::cout << A + translationVector;
    std::cout << A * scalingFactors << std::endl;

    SegmentOrizontal S1(2, 1, 5);
    std::cout << S1;
    std::cout << S1 + translationVector;
    std::cout << S1 * scalingFactors << std::endl;

    SegmentVertical S2(2, 1, 5);
    std::cout << S2;
    std::cout << S2 + translationVector;
    std::cout << S2 * scalingFactors << std::endl;

    return 0;
}
