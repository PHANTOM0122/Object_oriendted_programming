#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void reverse_Vec(vector<int> a);

int main() {

	vector<int> list(10);
	reverse_Vec(list);

	return 0;
}

void reverse_Vec(vector<int> a) {
	
	cout << "�⺻ Vector ��: " << endl;
	for (int i = 0; i < a.size(); i++) {
		a[i] = i + 1;
		cout << setw(3) << a[i];
	}
	cout << endl;

	cout << "�Լ� ���� �� Vector ��: " << endl;
	for (int i = 0; i < a.size(); i++) {	
		a[i] = 10 - i;
		cout << setw(3) << a[i];
	}
	cout << endl;

}