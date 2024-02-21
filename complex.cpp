#include <iostream>
using namespace std;

struct complex_number {
    int real;
    int imag;
};

complex_number adding_complex(complex_number, complex_number);

int main() {
    complex_number num1, num2, num3;
    num1.real = 20;
    num1.imag = 10;
    num2.real = 30;
    num2.imag = 40;
    num3 = adding_complex(num1, num2);
    cout << num3.real << " + i" << num3.imag;

    return 0;
}

complex_number adding_complex(complex_number a, complex_number b) {
    complex_number outpt;
    outpt.real = a.real + b.real;
    outpt.imag = a.imag + b.imag;
    return outpt;
}
