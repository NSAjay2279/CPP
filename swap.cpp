#include <iostream>
using namespace std;

void swap_m(int *, int *);

int main() {
    int a = 3, b = 4;
    swap_m(&a, &b);
    cout << "Outside Fn, A: " << a << " And B: " << b << endl;

    return 0;
}

void swap_m(int *a, int *b) {
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
    cout << "Inside Fn, a: " << *a << ". And b is: " << *b << endl;
}
