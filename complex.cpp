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
    void setV(int, int);
    bool isReal(void);
    ComplexNumbers findProduct(ComplexNumbers);


    void display(void);
};

void ComplexNumbers::display(void) {
    cout << real << " + i" << imag << endl;
}
void ComplexNumbers::setValues(int x, int y) {
    re
}

int main() {
    ComplexNumbers b(2,3);
    ComplexNumbers c(b);
    c.display();

    return 0;
}
