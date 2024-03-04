#include <iostream>
using namespace std;

int square(int n) {
    return n * n;
}

int main() {
    int x;
    cout << "What's x? ";
    cin >> x;
    cout << "x squared is " << square(x) << endl;
    return 0;
}
