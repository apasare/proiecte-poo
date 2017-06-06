#ifndef GEOMETRY_PUNCT_H_
#define GEOMETRY_PUNCT_H_

#include <iostream>
#include "AbstractClass.h"

namespace Geometry {
    class Punct : AbstractClass {
        protected:
            int x;
            int y;
        public:
            Punct(int x, int y);

            // translation
            Punct operator +(const Punct& p);
            // scaling
            Punct operator *(const Punct& p);
            void operator =(const Punct& p);

            int getX();
            int getY();

            friend std::ostream& operator <<(std::ostream& output, const Punct& p);
    };
}

#define Vector Punct
#endif // GEOMETRY_PUNCT_H_
