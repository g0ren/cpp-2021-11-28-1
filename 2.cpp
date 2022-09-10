#include <iostream>
using namespace std;

int main() {
	int n { 0 }, r { 0 };

	cout << "Enter a 4-digit number: ";
	cin >> n;
	if (n / 1000 != 0 && n / 10000 == 0) {
		r = (n / 100) % 10 * 1000 + (n / 100) / 10 * 100 + (n % 100) % 10 * 10
				+ (n % 100) / 10;
		cout << r;
	} else {
		cout << "Not a 4-digit number!";
	}
}
