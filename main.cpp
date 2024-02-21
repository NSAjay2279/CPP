#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullname, firstname, lastname;
    firstname = 10;
    lastname = 20;

    fullname = firstname + lastname;

    cout << fullname << endl;
    cout << fullname.length() << endl;
    cout << fullname.size() << endl;

    return 0;
}
