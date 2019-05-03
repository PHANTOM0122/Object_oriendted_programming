#include <iostream>
#include <string>
using namespace std;

class Account {
public:
	string name; string id; int balance;

	Account() {}
	Account(string, string, int);
	~Account() {}

	friend Account operator+(Account&, Account&);
	friend Account operator-(Account&, Account&);
	friend ostream &operator<<(ostream &, const Account&);

};

int main() {
	string sendId;
	string recieveId;

	Account acnt[3] = {
	Account("신은섭", "2019204212", 10000),
	Account("김유민", "2012311060", 0),
	Account("이강호", "2011102214", 5000),
	};

	Account send;
	Account recieve;

	while(true) {
		
		cout << "돈을 보낼 학생의 학번을 입력하세요: "; cin >> sendId;
		if (sendId == "종료") {
			cout << acnt[0];
			cout << acnt[1];
			cout << acnt[2];
			return 0;
		}
		cout << "돈을 받을 학생의 학번을 입력하세요: "; cin >> recieveId;

		int log_send = 10; int log_recieve= 10; 
		for (int i = 0; i < 3; i++) {
			if (sendId == acnt[i].id) {
				log_send = i;
			}

			if (recieveId == acnt[i].id) {
				log_recieve = i;
			}
		}

	
		if(sendId == recieveId) {
			cout << "학번이 중복됩니다." << endl;
		}

		else if(acnt[log_send].balance == 0 && (log_send!=10 && log_recieve!=10)) {
			cout << "보내는 학생의 잔액이 부족합니다." << endl;
		}

		else if (log_send == 10 || log_recieve ==10) {
			cout << "보내는 학생 혹은 받는 학생이 존재하지 않습니다." << endl;
		}

		else {
			recieve = acnt[log_send] + acnt[log_recieve];
			send = acnt[log_send] - acnt[log_recieve];
			cout << "보낸 학생의 학번: " << send;
			cout << "받은 학생의 학번: " << recieve;
		}
	}
	return 0;
}


Account::Account(string n, string i, int b) {
	name = n; id = i; balance = b;
}

Account operator+(Account& send,Account& recieve) { // a1이 보내는 사람 a2가 받는사람
	recieve.balance = send.balance + recieve.balance;
	return recieve;
}
Account operator-(Account& send,Account& recieve) { // a1이 보내는 사람 a2가 받는사람
	send.balance = 0;
	return send;
}

ostream &operator<<(ostream &os, const Account& arr) {
	os << "학번: " << arr.id << " " << "이름: " << arr.name << " " << "잔액: " << arr.balance << endl;
	return os;
}

