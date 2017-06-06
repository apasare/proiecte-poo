#include "AbstractClass.h"

namespace Geometry {
    const int AbstractClass::FIGURE_TYPE_PUNCT = 0;
    const int AbstractClass::FIGURE_TYPE_SEGMENT_ORIZONTAL = 1;
    const int AbstractClass::FIGURE_TYPE_SEGMENT_VERTICAL = 2;
    const int AbstractClass::FIGURE_TYPE_DREPTUNGHI = 3;

    AbstractClass::AbstractClass(int figureType) : figureType(figureType) {}
}
