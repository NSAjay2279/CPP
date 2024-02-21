#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};
    int n = 5;

    bool is_equivalent = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                continue;
            } else {
                is_equivalent = false;
                break;
            }
        }
        if (!is_equivalent) {
            break;
        }
    }
    if (is_equivalent) {
        cout << "equivalent";
    } else {
        cout << "not equivalent";
    }
    return 0;
}
