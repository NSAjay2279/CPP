#include <iostream>
using namespace std;

int main() {
    // Define a 3D array with dimensions 2x3x4
    int threeDArray[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Accessing elements of the 3D array
    cout << "Element at threeDArray[0][1][2]: " << threeDArray[0][1][2] << endl;
    cout << "Element at threeDArray[1][2][3]: " << threeDArray[1][2][3] << endl;

    return 0;
}
