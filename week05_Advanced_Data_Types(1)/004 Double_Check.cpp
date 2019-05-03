#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int size;
	int *list;

	//사이즈 입력받기
	cout << "Please enter number of values to process : "; cin >> size;

	// 새로운 동적 리스트 생성
	list = new int[size];

	if (size > 0) {
		// 숫자들 입력받기
		cout << "Please enter numbers: ";
		for (int i = 0; i < size; i++) {
			cin >> list[i];
		}
		
		// array의 max가 size와 같으면 중복 없이 있는 것이다.
		if (*max_element(list, list + size) == size) { cout << "True"; }
		else { cout << "False"; }

		// delete
		delete[] list;
	}

	return 0;
}