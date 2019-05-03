#include <iostream>
using namespace std;

int main() {

	int num;
	int sum = 0;
	
	cout << "number : "; cin >> num;


	for (int i = 0; i <= num; i++) {

		if (i % 2 != 0 && i % 3 != 0) {

			sum = sum + i;
		}

	}

	cout << sum;

	return 0;
}