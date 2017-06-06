#include "SegmentOrizontal.h"

namespace Geometry {
    SegmentOrizontal::SegmentOrizontal(int y, int x1, int x2) : AbstractClass(AbstractClass::FIGURE_TYPE_PUNCT), A(x1, y), B(x2, y) {}

    // translation
    SegmentOrizontal SegmentOrizontal::operator +(Punct& p) {
        return SegmentOrizontal(A.getY() + p.getY(), A.getX() + p.getX(), B.getX() + p.getX());
    }

    // scaling
    SegmentOrizontal SegmentOrizontal::operator *(Punct& p) {
        return SegmentOrizontal(A.getY() * p.getY(), A.getX() * p.getX(), B.getX() * p.getX());
    }

    std::ostream& operator <<(std::ostream& output, const SegmentOrizontal& s) {
        output << s.A << s.B;
        return output;
    }
}
