#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char text2[] = "Quite simply one of the most";
    char text1[] = "beautiful lyrics ever written, ";

    strcat(text1, text2);

    cout << text1 << endl;
    cout << text2 << endl;
    return 0;
}
