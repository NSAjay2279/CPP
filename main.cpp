#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    float b = 2.1;
    float *c;
    c = &b;
    cout << c;
    cout << c + 1;
    return 0;
}
