#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "What's your name? ";
    getline(cin, name);

    if (name == "Harry" || name == "Hermione" || name == "Ron") {
        cout << "Gryffindor" << endl;
    }
    else if (name == "Draco") {
        cout << "Slytherin" << endl;
    }
    else {
        cout << "Who?" << endl;
    }

    return 0;
}
