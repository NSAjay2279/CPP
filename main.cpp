#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string text2 = "Quite simply one of the most";
    string text1 = "beautiful lyrics ever written, ";
    
    char a[] = "hello, ";
    char b[] = "world";

    strcat(a, b);

    cout << a << endl;
    cout << b << endl;

    text1 = text1 + text2;

    cout << text1 << endl;
    cout << text2 << endl;
    return 0;
}
