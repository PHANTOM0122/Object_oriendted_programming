#include<iostream>
#include<string>
using namespace std;

class User {
public:
	string ID;
	int Password;
};


int main() {
	User user[3];
	string id, password, searchId, searchPassword;
	for (int i = 0; i < 3; i++) {
		/* User ������ �Է¹��� */
		cout << "==========" << i <<"===========" << endl;
		cout << "id : "; cin >> user[i].ID;
		/*
		for (int j = 0; j <= i; j++) {

				if (inputNumber == s[j].ID && i!=j) {
					cout <<"���ߺ��� �й��� �����մϴ�"<<endl;
					cout << endl <<length + 1 << "��° �л� �Է�" << endl;
					cout << "�й�: "; cin >> inputNumber;
					cout << "�̸�: "; cin >> inputName;
					cout << "����: "; cin >> inputMajor;
					s[i].setNumber(inputNumber);
					s[i].setName(inputName);
					s[i].setMajor(inputMajor);
				}
				else if(i==j) { cout << "���Է� �Ϸ�" << endl << endl; }

			}
		*/
		
		for (int j = 0; j <= i; j++) {
			if (user[i].ID == user[j].ID && i!=j) {
				cout << "�̹� �����ϴ� ID�Դϴ�." << endl;
				cout << "�����մϴ�";
				return 0;
			}
		}
		cout << "password : "; cin >> user[i].Password;
		cout << "========================" << endl << endl;
	}


	while (1) {
		string inputId; int p;

		cout << "========== Login ===========" << endl;
		cout << "id : "; cin >> inputId;
		

		if (inputId != "����") {
			cout << "password : "; cin >> p;
			for (int i = 0; i < 3; i++) {

				if (inputId == user[i].ID) {

					int n = i; // n�� ��ġ�ϴ� i��

					if (p == user[n].Password){
						cout << "�α��εǼ̽��ϴ�." << endl;
						cout << "============================" << endl << endl;
					}

					else {
						cout << "�߸��� ���̵�ų� �н����� �Դϴ�."<<endl;
						cout << "============================" << endl << endl;
					}
				}
			}
		}
		
		else {
			cout << "�����ϰڽ��ϴ�." << endl;
			break;
		}

	}

	return 0;
}