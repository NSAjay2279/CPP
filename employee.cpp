#include <iostream>
using namespace std;

class Employee {
  private:
    string name;
    string phone_no;
    string job_post;
    int age;

  public:
    friend ostream &operator<<(ostream &out, Employee &c);
    friend istream &operator>>(istream &in, Employee &c);
    void operator=(Employee &);
};

int main()
{
    Employee a, b;
    cin >> a;
    cout >> a;
    b = a;
    cout << b;

    return 0;
}

istream &operator>>(istream &in, Employee &c)
{
    cout << "Enter name of employee" << endl;
    in >> c.name;
}
