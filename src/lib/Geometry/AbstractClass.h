#ifndef GEOMETRY_ABSTRACTCLASS_H_
#define GEOMETRY_ABSTRACTCLASS_H_

#include <iostream>

namespace Geometry {
    class AbstractClass {
        protected:
            int figureType;
            AbstractClass(int figureType);
        public:
            static const int FIGURE_TYPE_PUNCT;
            static const int FIGURE_TYPE_SEGMENT_ORIZONTAL;
            static const int FIGURE_TYPE_SEGMENT_VERTICAL;
            static const int FIGURE_TYPE_DREPTUNGHI;
    };
}

#endif // GEOMETRY_ABSTRACTCLASS_H_
