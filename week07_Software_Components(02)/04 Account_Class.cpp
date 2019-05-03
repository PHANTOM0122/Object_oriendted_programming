#include <iostream>
#include <string>
using namespace std;

class Account {
public:
	string name;
	int id;
	int balance;
};


int main() {
	int n;
	int total = 0;
	Account *acc;
	cout << "총 학생수 입력: "; cin >> n;
	acc = new Account[n];
	
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 학생 계좌 입력 : " << "학번: "; cin >> acc[i].id;
		
		// 중복제거
		for (int j = 0; j <= i; j++) {
			if (acc[i].id == acc[j].id && i != j) {
				exit(0);
			}
		}

		cout << "이름 : "; cin >> acc[i].name;
		cout << "잔액 : "; cin >> acc[i].balance;
		cout << "==========================" << endl<<endl;
		total += acc[i].balance;
	}

	cout << "회수한 금액 : " << total << endl;

	delete[] acc;
	return 0;
}