#include "SegmentVertical.h"

namespace Geometry {
    SegmentVertical::SegmentVertical(int x, int y1, int y2) : AbstractClass(AbstractClass::FIGURE_TYPE_PUNCT), A(x, y1), B(x, y2) {}

    // translation
    SegmentVertical SegmentVertical::operator +(Punct& p) {
        return SegmentVertical(A.getX() + p.getX(), A.getY() + p.getY(), B.getY() + p.getY());
    }

    // scaling
    SegmentVertical SegmentVertical::operator *(Punct& p) {
        return SegmentVertical(A.getX() * p.getX(), A.getY() * p.getY(), B.getY() * p.getY());
    }

    std::ostream& operator <<(std::ostream& output, const SegmentVertical& s) {
        output << s.A << s.B;
        return output;
    }
}
