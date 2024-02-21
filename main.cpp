#include <iostream>
#include <string>
using namespace std;

void add(int, int, int = 0, int);

int main()
{
    int a, b, c, d;
    cout << "Enter 4 values" << endl;
    cin >> a >> b >> c >> d;
    add(a, b, c, d);
    add(a, b);

    return 0;
}

void add(int a, int b, int c, int d) {
    cout << a + b + c + d << endl;
}
