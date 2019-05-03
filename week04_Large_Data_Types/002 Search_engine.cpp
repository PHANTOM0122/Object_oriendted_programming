#include <iostream>
#include <string>

using namespace std;

int main() {

	string database[] = { "사랑", "프로그래밍", "의자", "사랑의바보", "영통역", "천년의사랑", "냉장고", "객체지향" };
	string search;

	cout << "키워드: "; cin >> search;
	
	cout << "검색결과: ";
	for (int i = 0; i < 8; i++) {

		if (database[i].find(search) <database[i].length()) {
			cout<< database[i]<<"\t";
			
		}
	}
	

	return 0;
}