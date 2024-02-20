#include <algorithm>
#include <iostream>
#include <string>

class LongLongLongInt {
  private:
    std::string value;

  public:
    LongLongLongInt() : value("0") {}

    LongLongLongInt(const std::string &str) : value(str) {}

    LongLongLongInt(long long num) : value(std::to_string(num)) {}

    LongLongLongInt operator+(const LongLongLongInt &other) const
    {
        std::string result;
        int carry = 0;
        int i = value.length() - 1;
        int j = other.value.length() - 1;

        while (i >= 0 || j >= 0 || carry > 0)
        {
            int digit1 = (i >= 0) ? value[i] - '0' : 0;
            int digit2 = (j >= 0) ? other.value[j] - '0' : 0;
            int sum = digit1 + digit2 + carry;
            result.push_back('0' + (sum % 10));
            carry = sum / 10;
            i--;
            j--;
        }

        std::reverse(result.begin(), result.end());
        return LongLongLongInt(result);
    }

    // Implement other arithmetic operators similarly

    friend std::ostream &operator<<(std::ostream &os, const LongLongLongInt &obj)
    {
        os << obj.value;
        return os;
    }
};

int main()
{
    LongLongLongInt a("1234567890123456789012345678901234567890");
    LongLongLongInt b("9876543210987654321098765432109876543210");

    LongLongLongInt c = a + b;

    std::cout << "Result: " << c << std::endl;

    return 0;
}
