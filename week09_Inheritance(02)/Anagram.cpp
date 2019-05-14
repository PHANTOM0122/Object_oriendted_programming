#include <iostream>
#include <string>
using namespace std;

int main() {

	string s1, s2;
	int strSize1, strSize2;
	int erase;
	
	cout << "두 단어를 입력해주세요: "; cin >> s1 >> s2;

	// sample XXYYBB AABBCC
	strSize1 = s1.size();
	strSize2 = s2.size();
	
	//string.erase(index, 갯수)
	for (unsigned i = 0; i < s1.size(); i++) {
		for (unsigned j = 0; j < s2.size(); j++) {

			if (s1[i] == s2[j]) {
				s1.erase(i, 1);
			}
		}
	}

	int afterstrSize1 = s1.size();
	
	erase = (strSize1+strSize2) - 2 * (strSize1 - afterstrSize1);

	cout << erase;
	return 0;
}