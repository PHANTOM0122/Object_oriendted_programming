#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int size;
	int *list;

	//������ �Է¹ޱ�
	cout << "Please enter number of values to process : "; cin >> size;

	// ���ο� ���� ����Ʈ ����
	list = new int[size];

	if (size > 0) {
		// ���ڵ� �Է¹ޱ�
		cout << "Please enter numbers: ";
		for (int i = 0; i < size; i++) {
			cin >> list[i];
		}
		
		// array�� max�� size�� ������ �ߺ� ���� �ִ� ���̴�.
		if (*max_element(list, list + size) == size) { cout << "True"; }
		else { cout << "False"; }

		// delete
		delete[] list;
	}

	return 0;
}