#include<iostream>
using namespace std;

int main() {

	while (true) {
	
	int num;

	cout << "number : "; cin >> num;


	if (num >= 1 && num <= 9) {

		for (int i = 1; i <= 9; i++) {

			cout << num << "*" << i << "=" << num * i<<"\t";

		}
		cout << endl;
	}

	else {
		break;
	}
	}
	
	return 0;
}
