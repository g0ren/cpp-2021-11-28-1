#include <iostream>
using namespace std;

int main() {
	unsigned int load { 0 };
	unsigned int cons { 0 };
	double distance { 0 }, distance1 { 0 }, distance2 { 0 };

	cout << "Enter distance between A and B (km): ";
	cin >> distance1;
	cout << "Enter distance between B and C (km): ";
	cin >> distance2;
	distance = distance1 + distance2;

	cout << "Enter load (kg): ";
	cin >> load;
	if (load <= 500) {
		cons = 1;
	} else if (load <= 1000) {
		cons = 4;
	} else if (load <= 1500) {
		cons = 7;
	} else if (load <= 2000) {
		cons = 9;
	} else {
		cout << "Can't take off with this much load!" << endl;
		return 0;
	}

	cout << "You'll need " << (double) cons * distance1 << " l of fuel to fly from A to B." << endl;
	cout << "You'll need " << (double) cons * distance2 << " l of fuel to fly from B to C." << endl;
	cout << "You'll need " << (double) cons * distance << " l of fuel in total." << endl;

	return 0;
}
