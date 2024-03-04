#include <iostream>
using namespace std;

bool is_even(int n) {
    return (n % 2 == 0);
}

int main() {
    int x;
    cout << "What's x? ";
    cin >> x;

    if (is_even(x)) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }

    return 0;
}
