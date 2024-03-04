#include <iostream>
using namespace std;

int square(int n) {
	return n*n;
	}

int main() {
	int x;
	cout << "what's x? ";
	cin >> x;
	cout << "x square is " << square(x) << endl;
	return 0;
}
