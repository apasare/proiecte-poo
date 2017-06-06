#ifndef GEOMETRY_SEGMENTVERTICAL_H_
#define GEOMETRY_SEGMENTVERTICAL_H_

#include <iostream>
#include "AbstractClass.h"
#include "Punct.h"

namespace Geometry {
    class SegmentVertical : AbstractClass {
        protected:
            Punct A;
            Punct B;
        public:
            SegmentVertical(int x, int y1, int y2);

            // translation
            SegmentVertical operator +(Punct& p);
            // scaling
            SegmentVertical operator *(Punct& p);

            friend std::ostream& operator <<(std::ostream& output, const SegmentVertical& p);
    };
}

#endif // GEOMETRY_SEGMENTVERTICAL_H_
