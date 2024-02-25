#include <iostream>
using namespace std;

class Employee {
  private:
    string name;

  public:
    friend ostream &operator<<(ostream &out, const Employee &c);
    friend istream &operator>>(istream &in, Employee &c);
    void operator=(const Employee &b);
};

int main()
{
    Employee a, b;
    cin >> a;
    cout << a;
    b = a;
    cout << b;

    return 0;
}

ostream &operator<<(ostream &out, const Employee &c)
{
    out << "--- EMPLOYEE RECORD ---" << endl;
    out << "NAME: " << c.name << endl;
    return out;
}

istream &operator>>(istream &in, Employee &c)
{
    cout << "Enter name of employee" << endl;
    in >> c.name;
    return in;
}

void Employee::operator=(const Employee &b)
{
    name = b.name;
}
