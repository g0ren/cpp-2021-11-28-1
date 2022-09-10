#include <iostream>
using namespace std;

int main() {
	const int total { 7 };
	int max { -32767 };
	int n { 0 };
	int i { 1 };
	while (i <= total) {
		cout << "Enter number #" << i << ": ";
		cin >> n;
		if (n > max) {
			max = n;
		}
		i++;
	}
	cout << "Maximum of the numbers is " << max << endl;

}
