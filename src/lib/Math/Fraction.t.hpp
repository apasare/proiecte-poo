#ifndef MATH_FRACTION_H_
#define MATH_FRACTION_H_

#include <iostream>

namespace Math {
    template <class T>
    class Fraction {
        protected:
            T numerator;
            T denominator;
        public:
            // constructor
            Fraction();
            // constructor cu parametri
            Fraction(T numerator, T denominator);
            // copy constructor
            Fraction(const Fraction<T>& obj);
            // deconstructor
            ~Fraction();

            // suprascrierea operatorilor: +, +=, -, -=, *, *=, /, /=
            Fraction<T> operator +(const Fraction<T>& f);
            Fraction<T>& operator +=(const Fraction<T>& f);
            Fraction<T> operator -();
            Fraction<T> operator -(const Fraction<T>& f);
            Fraction<T>& operator -=(const Fraction<T>& f);
            Fraction<T> operator *(const Fraction<T>& f);
            Fraction<T>& operator *=(const Fraction<T>& f);
            Fraction<T> operator /(const Fraction<T>& f);
            Fraction<T>& operator /=(const Fraction<T>& f);

            // suprascrierea operatorilor: =, ==, !=
            void operator =(const Fraction<T>& f);
            bool operator ==(const Fraction<T>& f);
            bool operator !=(const Fraction<T>& f);

            // suprascrierea operatorului de intrare
            friend std::ostream& operator <<(std::ostream& output, const Fraction& f) {
                output << f.numerator << " " << f.denominator << std::endl;
                return output;
            };

            // suprascrierea operatorului de iesire
            friend std::istream& operator >>(std::istream& input, Fraction& f) {
                input >> f.numerator >> f.denominator;
                return input;
            };

            // cast operator
            operator T();
    };

    template <class T>
    Fraction<T>::Fraction(): numerator(0), denominator(1) {}

    template <class T>
    Fraction<T>::Fraction(T numerator, T denominator): numerator(numerator), denominator(denominator) {}

    template <class T>
    Fraction<T>::Fraction(const Fraction<T>& obj): numerator(obj.numerator), denominator(obj.denominator) {}

    template <class T>
    Fraction<T>::~Fraction() {}

    template <class T>
    Fraction<T> Fraction<T>::operator +(const Fraction<T>& f) {
        T numerator;
        T denominator;

        if (this->denominator != f.denominator) {
            numerator = (this->numerator * f.denominator) + (this->denominator * f.numerator);
            denominator = this->denominator * f.denominator;
        } else {
            numerator = this->numerator + f.numerator;
            denominator = this->denominator;
        }

        return Fraction<T>(numerator, denominator);
    }

    template <class T>
    Fraction<T>& Fraction<T>::operator +=(const Fraction<T>& f) {
        if (this->denominator != f.denominator) {
            this->numerator = (this->numerator * f.denominator) + (this->denominator * f.numerator);
            this->denominator = this->denominator * f.denominator;
        } else {
            this->numerator = this->numerator + f.numerator;
        }

        return *this;
    }

    template <class T>
    Fraction<T> Fraction<T>::operator -() {
        return Fraction<T>(-this->numerator, this->denominator);
    }

    template <class T>
    Fraction<T> Fraction<T>::operator -(const Fraction<T>& f) {
        T numerator;
        T denominator;

        if (this->denominator != f.denominator) {
            numerator = (this->numerator * f.denominator) - (this->denominator * f.numerator);
            denominator = this->denominator * f.denominator;
        } else {
            numerator = this->numerator - f.numerator;
            denominator = this->denominator;
        }

        return Fraction<T>(numerator, denominator);
    }

    template <class T>
    Fraction<T>& Fraction<T>::operator -=(const Fraction<T>& f) {
        if (this->denominator != f.denominator) {
            this->numerator = (this->numerator * f.denominator) - (this->denominator * f.numerator);
            this->denominator = this->denominator * f.denominator;
        } else {
            this->numerator = this->numerator - f.numerator;
        }

        return *this;
    }

    template <class T>
    Fraction<T> Fraction<T>::operator *(const Fraction<T>& f) {
        T numerator = this->numerator * f.numerator;
        T denominator = this->denominator * f.denominator;

        return Fraction<T>(numerator, denominator);
    }

    template <class T>
    Fraction<T>& Fraction<T>::operator *=(const Fraction<T>& f) {
        this->numerator *= f.numerator;
        this->denominator *= f.denominator;

        return *this;
    }

    template <class T>
    Fraction<T> Fraction<T>::operator /(const Fraction<T>& f) {
        T numerator = this->numerator * f.denominator;
        T denominator = this->denominator * f.numerator;

        return Fraction<T>(numerator, denominator);
    }

    template <class T>
    Fraction<T>& Fraction<T>::operator /=(const Fraction<T>& f) {
        this->numerator *= f.denominator;
        this->denominator *= f.numerator;

        return *this;
    }

    template <class T>
    void Fraction<T>::operator =(const Fraction<T>& f) {
        numerator = f.numerator;
        denominator = f.denominator;
    }

    template <class T>
    bool Fraction<T>::operator ==(const Fraction<T>& f) {
        return 1. * this->numerator / this->denominator == 1. * f.numerator / f.denominator;
    }

    template <class T>
    bool Fraction<T>::operator !=(const Fraction<T>& f) {
        return 1. * this->numerator / this->denominator != 1. * f.numerator / f.denominator;
    }

    template <class T>
    Fraction<T>::operator T() {
        return this->numerator / this->denominator;
    }
}

#endif // MATH_FRACTION_H_
