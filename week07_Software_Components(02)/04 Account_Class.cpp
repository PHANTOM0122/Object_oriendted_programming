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
	cout << "�� �л��� �Է�: "; cin >> n;
	acc = new Account[n];
	
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° �л� ���� �Է� : " << "�й�: "; cin >> acc[i].id;
		
		// �ߺ�����
		for (int j = 0; j <= i; j++) {
			if (acc[i].id == acc[j].id && i != j) {
				exit(0);
			}
		}

		cout << "�̸� : "; cin >> acc[i].name;
		cout << "�ܾ� : "; cin >> acc[i].balance;
		cout << "==========================" << endl<<endl;
		total += acc[i].balance;
	}

	cout << "ȸ���� �ݾ� : " << total << endl;

	delete[] acc;
	return 0;
}