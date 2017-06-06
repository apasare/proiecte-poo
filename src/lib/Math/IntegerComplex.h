#ifndef MATH_INTEGERCOMPLEX_H_
#define MATH_INTEGERCOMPLEX_H_

#include <iostream>

namespace Math {
    class IntegerComplex {
        protected:
            int real;
            int imaginary;
        public:
            IntegerComplex();
            IntegerComplex(int real, int imaginary);

            IntegerComplex operator +(const IntegerComplex& c);
            IntegerComplex& operator +=(const IntegerComplex& c);
            IntegerComplex operator -();
            IntegerComplex operator -(const IntegerComplex& c);
            IntegerComplex& operator -=(const IntegerComplex& c);
            IntegerComplex operator *(const IntegerComplex& c);
            IntegerComplex& operator *=(const IntegerComplex& c);
            IntegerComplex operator /(const IntegerComplex& c);
            IntegerComplex& operator /=(const IntegerComplex& c);

            bool operator !=(const IntegerComplex& c);
            bool operator ==(const IntegerComplex& c);

            friend std::ostream& operator <<(std::ostream& output, const IntegerComplex& c) {
                output << c.real << " " << c.imaginary << std::endl;
                return output;
            };

            friend std::istream& operator >>(std::istream& input, IntegerComplex& c) {
                input >> c.real >> c.imaginary;
                return input;
            };
    };
}

#endif // MATH_INTEGERCOMPLEX_H_
