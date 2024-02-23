#include <iostream>
using namespace std;

class ComplexNumbers {
    int real;
    int imag;
    public:
    ComplexNumbers(ComplexNumbers z) {
        real = z.real;
        
    }
};

complex_number adding_complex(complex_number, complex_number);

int main() {
    ComplexNumbers b(2,3);
    ComplexNumbers c(b);
    c.display();

    return 0;
}

complex_number adding_complex(complex_number a, complex_number b) {
    complex_number outpt;
    outpt.real = a.real + b.real;
    outpt.imag = a.imag + b.imag;
    return outpt;
}
