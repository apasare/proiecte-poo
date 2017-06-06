#include "IntegerComplex.h"

namespace Math {
    IntegerComplex::IntegerComplex() {}

    IntegerComplex::IntegerComplex(int real, int imaginary): real(real), imaginary(imaginary) {}

    IntegerComplex IntegerComplex::operator +(const IntegerComplex& c) {
        return IntegerComplex(real + c.real, imaginary + c.imaginary);
    }

    IntegerComplex& IntegerComplex::operator +=(const IntegerComplex& c) {
        real += c.real;
        imaginary += c.imaginary;

        return *this;
    }

    IntegerComplex IntegerComplex::operator -() {
        return IntegerComplex(-real, -imaginary);
    }

    IntegerComplex IntegerComplex::operator -(const IntegerComplex& c) {
        return IntegerComplex(real - c.real, imaginary - c.imaginary);
    }

    IntegerComplex& IntegerComplex::operator -=(const IntegerComplex& c) {
        real -= c.real;
        imaginary -= c.imaginary;

        return *this;
    }

    IntegerComplex IntegerComplex::operator *(const IntegerComplex& c) {
        int real = this->real * c.real - this->imaginary * c.imaginary;
        int imaginary = this->real * c.imaginary + c.real * this->imaginary;

        return IntegerComplex(real, imaginary);
    }

    IntegerComplex& IntegerComplex::operator *=(const IntegerComplex& c) {
        int real = this->real * c.real - this->imaginary * c.imaginary;
        int imaginary = this->real * c.imaginary + c.real * this->imaginary;

        this->real = real;
        this->imaginary = imaginary;

        return *this;
    }

    IntegerComplex IntegerComplex::operator /(const IntegerComplex& c) {
        int denominator = c.real * c.real + c.imaginary * c.imaginary;
        int real = (this->real * c.real + this->imaginary * c.imaginary) / denominator;
        int imaginary = (c.real * this->imaginary - this->real * c.imaginary) / denominator;

        return IntegerComplex(real, imaginary);
    }

    IntegerComplex& IntegerComplex::operator /=(const IntegerComplex& c) {
        int denominator = c.real * c.real + c.imaginary * c.imaginary;
        int real = (this->real * c.real + this->imaginary * c.imaginary) / denominator;
        int imaginary = (c.real * this->imaginary - this->real * c.imaginary) / denominator;

        this->real = real;
        this->imaginary = imaginary;

        return *this;
    }

    bool IntegerComplex::operator !=(const IntegerComplex& c) {
        return real != c.real || imaginary != c.imaginary;
    }

    bool IntegerComplex::operator ==(const IntegerComplex& c) {
        return real == c.real && imaginary == c.imaginary;
    }
}
