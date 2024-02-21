#include <iostream>
using namespace std;

void swap_m(int*, int*);

int main() {
    int a, b;
    cout << "Enter values of a & b" << endl;
    cin >> a >> b;
    swap_m(&a, &b);
    cout << "Outside Fn, A: " << a << endl << "B: " << b << endl;
    cout << "X IS: " << x << endl;

    return 0
}

void swap_m(int *a, int *b) {
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
    cout << "Inside Fn, a: " << *a << ". And b is: " << *b << endl;
}
