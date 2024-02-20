#include <iomanip> // Include iomanip for setting precision
#include <iostream>

using namespace std;

int main()
{
    int gpa;

    cout << "enter your gpa: ";
    cin >> gpa;

    if(!gpa) {
       cout << "You typed 0";
    }
    else {
        cout << "Welcome";
    }
    return 0;
}
