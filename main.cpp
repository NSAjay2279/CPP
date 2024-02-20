#include <iostream>

using namespace std;

int main()
{
    int a, b;
    float average;

    cin >> a;
    cin >> b;

    cout << fixed << (float)a + b << endl;

    average = ((float)a + b) / 2;

    cout << "Hello, World! " << average << endl;

    return 0;
}
