#include <iostream>
using namespace std;

int main()
{
    a[5] = {1,2,3,4,5};
    b[5] = {1,2,3,4,6};

    bool is_equivalent = true;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                continue;
            }
        }
    }
    return 0;
}
