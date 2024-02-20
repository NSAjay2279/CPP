#include <iomanip> // Include iomanip for setting precision
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    float average;

    cin >> a;
    cin >> b;

    cout << fixed << setprecision(2); // Set precision to 2 decimal places

    cout << (float) a + (float) b << endl;

    average = ((float) a + b) / 2;

    cout << "Hello, World! " << average << endl;

    return 0;
}
