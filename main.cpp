#include <iomanip> // Include iomanip for setting precision
#include <iostream>

using namespace std;

int main()
{
    int radius;
    float s_area, volume, PI;

    PI = (float)(22/7);

    cout << "Please enter the radius of the sphere!" << endl;
    cin >> radius;

    s_area = 4 * PI * radius * radius;

    cout << s_area << endl;

    return 0;
}
