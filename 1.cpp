#include <iostream>
using namespace std;

int main() {
	int n { 0 };
	int head { 0 };
	int tail { 0 };
	int headsum { 0 };
	int tailsum { 0 };
	cout << "Enter a 6-digit number: ";
	cin >> n;

	if (n / 1000000 != 0 || n / 100000 == 0) {
		cout << "Not a 6-digit number!";
	} else {
		head = n / 1000;
		tail = n % 1000;
		while (head != 0) {
			headsum += head % 10;
			head /= 10;
		}

		while (tail != 0) {
			tailsum += tail % 10;
			tail /= 10;
		}

		if (headsum == tailsum) {
			cout << "Lucky number!" << endl;
		} else {
			cout << "Not a lucky number!" << endl;
		}
	}
	return 0;
}
