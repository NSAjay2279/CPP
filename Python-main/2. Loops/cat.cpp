#include <iostream>
using namespace std;

int get_number() {
    while (true) {
        int n;
        cout << "What's n? ";
        cin >> n;
        if (n > 0) {
            return n;
        }
    }
}

void meow(int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "meow" << endl;
    }
}

int main()
{
    int number = get_number();
    meow(number);
    return 0;
}
