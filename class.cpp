#include <iostream>
using namespace std;

class Testing {
  private:
    int a;
    float b;

  public:
    int c;
    float d;
    Testing() {
        this->a = 0;
        this->b = 0;
        this->c = 0;
        this->d = 0;
    }

    void print_values(void) {
        cout << "a: " << this->a << endl;
        cout << "b: " << this->b << endl;
        cout << "c: " << this->c << endl;
        cout << "d: " << this->d << endl;
    }
};

int main() {
    Testing x, y;
    x.print_values();
    y.print_values();
    return 0;
}
