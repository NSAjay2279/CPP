#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullname, firstname, lastname;
    firstname = to_string(10);
    lastname = to_string(20);

    fullname = firstname + lastname;

    cout << firstname << endl;
    cout << lastname << endl;
    cout << fullname << endl;
    cout << fullname.length() << endl;
    cout << fullname.size() << endl;

    return 0;
}
