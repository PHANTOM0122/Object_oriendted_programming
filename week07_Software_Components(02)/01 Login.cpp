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
		/* User 정보를 입력받음 */
		cout << "==========" << i <<"===========" << endl;
		cout << "id : "; cin >> user[i].ID;
		/*
		for (int j = 0; j <= i; j++) {

				if (inputNumber == s[j].ID && i!=j) {
					cout <<"※중복된 학번이 존재합니다"<<endl;
					cout << endl <<length + 1 << "번째 학생 입력" << endl;
					cout << "학번: "; cin >> inputNumber;
					cout << "이름: "; cin >> inputName;
					cout << "전공: "; cin >> inputMajor;
					s[i].setNumber(inputNumber);
					s[i].setName(inputName);
					s[i].setMajor(inputMajor);
				}
				else if(i==j) { cout << "※입력 완료" << endl << endl; }

			}
		*/
		
		for (int j = 0; j <= i; j++) {
			if (user[i].ID == user[j].ID && i!=j) {
				cout << "이미 존재하는 ID입니다." << endl;
				cout << "종료합니다";
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
		

		if (inputId != "종료") {
			cout << "password : "; cin >> p;
			for (int i = 0; i < 3; i++) {

				if (inputId == user[i].ID) {

					int n = i; // n은 일치하는 i값

					if (p == user[n].Password){
						cout << "로그인되셨습니다." << endl;
						cout << "============================" << endl << endl;
					}

					else {
						cout << "잘못된 아이디거나 패스워드 입니다."<<endl;
						cout << "============================" << endl << endl;
					}
				}
			}
		}
		
		else {
			cout << "종료하겠습니다." << endl;
			break;
		}

	}

	return 0;
}