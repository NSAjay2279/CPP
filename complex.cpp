#include <iostream>
using namespace std;

struct complex_number {
    int real;
    int imag;
};
int main() {
    complex_number num1, num2, num3;
    num1.real = 20;
    num1.imag = 10;
    num2.real = 30;
    num2.imag = 40;
    num3.real = num1.real + num2.real;
    num3.imag = num1.imag + num2.imag;
}


