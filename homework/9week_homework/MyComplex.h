#ifndef _MYCOMPLEX_H_
#define _MYCOMPLEX_H_

#include <iostream>
using namespace std;

class myComplex {
    public:
        // Constructor (생성자)
        myComplex(int real = 0, int imag = 0);
        // Copy constructor (복사생성자)
        myComplex(const myComplex& number);
        // Accessorfunctions (접근자)
        int getRealPart() const;
        int getImaginaryPart() const;
        // Mutator functions (변경자)
        void setRealPart(int real);
        void setImaginaryPart(int imag);
        void set(int real, int imag);
        // Overloaded binary operators
        myComplex operator +(const myComplex& number) const;
        myComplex operator +(int value) const;
        myComplex operator -(const myComplex& number) const;
        myComplex operator -(int value) const;
        myComplex operator *(const myComplex& number) const;
        myComplex operator *(int value) const;
        
        // Overloaded assignment operators
        myComplex& operator =(const myComplex& number);
        myComplex& operator =(int value);
        myComplex& operator +=(const myComplex& number);
        myComplex& operator +=(int value);
        myComplex& operator -=(const myComplex& number);
        myComplex& operator -=(int value);
        myComplex& operator *=(const myComplex& number);
        myComplex& operator *=(int value);

        myComplex& operator++();
        myComplex operator++(int);
        myComplex& operator--();
        myComplex operator--(int);

        //Overloaded unary operators
        bool operator ==(const myComplex& number) const;
        bool operator !=(const myComplex& number) const;
        
        bool operator >(const myComplex& number) const;
        bool operator <(const myComplex& number) const;
        bool operator >=(const myComplex& number) const;
        bool operator <=(const myComplex& number) const;
        
        friend myComplex operator+(int value, const myComplex& number){return number + value;};
        friend myComplex operator+(int value, const myComplex& number){return -(number - value);};
        friend myComplex operator*(int value, const myComplex& number){return number * value;};

        // Overloaded unary operators
        myComplex operator -();
        myComplex operator ~();
        // unary minus

        friend ostream& operator <<(ostream &outStream, const myComplex& number);
        friend istream& operator >>(istream &inStream, myComplex& number){

    private:
        int realPart;
        int imaginaryPart;
        int norm() const;
};

#endif