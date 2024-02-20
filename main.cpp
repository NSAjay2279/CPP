#include <iomanip> // Include iomanip for setting precision
#include <iostream>

using namespace std;

int main()
{
    int gpa;

    cout << "enter your gpa: ";
    cin >> gpa;

    switch(gpa) {
        case 0:
            cout << "terrible";
            break;
        case 1:
            cout << "Satisfactory";
            break;
        default:
            cout << "invalid gpa";
            break;
    }

    return 0;
}
