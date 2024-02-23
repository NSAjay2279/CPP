#include <iostream>
using namespace std;

class ComplexNumbers {
    int real;
    int imag;
    public:
    ComplexNumbers(int x, int y) {
        real = x;
        imag = y;
    }
    ComplexNumbers(const ComplexNumbers &z) {
        real = z.real;
        imag = z.imag;
    }
    void setValues(int, int);
    bool isReal(void);
    ComplexNumbers findProduct(ComplexNumbers);


    void display(void);
};


int main() {
    ComplexNumbers a, b, c;
    a.setValues(1, 2);  // mutator
    b.setValues(3, 4);  // mutator
    a.display();    // accessor
    b.display();    // accessor
    c = a.findProduct(b);
    c.display();
    cout << c.isReal() << endl;

    return 0;
}

void ComplexNumbers::display(void) {
    cout << real << " + i" << imag << endl;
}
void ComplexNumbers::setValues(int x, int y) {
    real = x;
    imag = y;
}
bool ComplexNumbers::isReal(void) {
    if (imag==0) {
        return true;
    } else {
        return false;
    }
}
ComplexNumbers ComplexNumbers::findProduct(ComplexNumbers x) {
    ComplexNumbers z;
    z.real = real*x.real - imag*x.imag;
    z.imag = imag.x.real + real*x.imag;
    return z;
}
