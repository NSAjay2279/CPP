#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *i;
    float b = 2.1;
    float *f;
    i = &a;
    f = &b;
    cout << i << endl;
    cout << &i << endl;
    cout << f << endl;
    cout << &f << endl;
    return 0;
}
