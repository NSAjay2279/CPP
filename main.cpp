#include <iomanip> // Include iomanip for setting precision
#include <iostream>

using namespace std;

int main()
{
    int radius;
    float s_area, volume;

    cout << "Please enter the radius of the sphere!" << endl;
    cin >> radius;

    s_area = 4 * (22/7) * radius * radius;

    cout << s_area << endl;

    return 0;
}
