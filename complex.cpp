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
    void display(void);
};

void ComplexNumbers::display(void) {
    cout << real << " + i" << imag << endl;
}

int main() {
    ComplexNumbers b(2,3);
    ComplexNumbers c(b);
    c.display();

    return 0;
}
