#ifndef GEOMETRY_SEGMENTORIZONTAL_H_
#define GEOMETRY_SEGMENTORIZONTAL_H_

#include <iostream>
#include "AbstractClass.h"
#include "Punct.h"

namespace Geometry {
    class SegmentOrizontal : AbstractClass {
        protected:
            Punct A;
            Punct B;
        public:
            SegmentOrizontal(int y, int x1, int x2);

            // translation
            SegmentOrizontal operator +(Punct& p);
            // scaling
            SegmentOrizontal operator *(Punct& p);

            friend std::ostream& operator <<(std::ostream& output, const SegmentOrizontal& p);
    };
}

#endif // GEOMETRY_SEGMENTORIZONTAL_H_
