#include <iostream>
using namespace std;

class Testing {
  private:
    int a;
    float b;

  public:
    int c;
    float d;
    void set_default(void) {
        this->a = 0;
        this->b = 0;
    }
    void print_values(void) {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
        cout << "d: " << d << endl;
    }
};

int main() {
    Testing x;
    x.c = 5;
    x.d = 8;
    x.set_default();
    x.print_values();
    return 0;
}
