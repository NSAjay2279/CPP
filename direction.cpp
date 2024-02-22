#include <iostream>
using namespace std;

void go_south_east(int *lat, int *lon) {
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main() {
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);
    cout << "current location" << "[" << latitude << "," << longitude << "]" << endl;

    return 0;
}
