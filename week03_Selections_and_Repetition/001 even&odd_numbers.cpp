#include <iostream>
using namespace std;

int main() {

	int num;

	while (true) {

	
	cout << "number : ";
	cin >> num;
	
	if (num >= 0) {


		if (num % 2 == 0) {
			cout << num << "�� ¦���Դϴ�." << endl;
		}
		else if (num % 2 == 1) {
			cout << num << "�� Ȧ���Դϴ�." << endl;
		}	
	}
	
	else {
		break;
	}
	
	}


	return 0;
}