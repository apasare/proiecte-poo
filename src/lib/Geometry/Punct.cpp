#include "Punct.h"

namespace Geometry {
    Punct::Punct(int x, int y) : AbstractClass(AbstractClass::FIGURE_TYPE_PUNCT), x(x), y(y) {}

    // translation
    Punct Punct::operator +(const Punct& p) {
        return Punct(x + p.x, y + p.y);
    }

    // scaling
    Punct Punct::operator *(const Punct& p) {
        return Punct(x * p.x, y * p.y);
    }

    void Punct::operator =(const Punct& p) {
        x = p.x;
        y = p.y;
    }

    int Punct::getX() {
        return x;
    }

    int Punct::getY() {
        return y;
    }

    std::ostream& operator <<(std::ostream& output, const Punct& p) {
        output << p.x << " " << p.y << std::endl;
        return output;
    }
}
