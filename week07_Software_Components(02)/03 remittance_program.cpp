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
	Account("������", "2019204212", 10000),
	Account("������", "2012311060", 0),
	Account("�̰�ȣ", "2011102214", 5000),
	};

	Account send;
	Account recieve;

	while(true) {
		
		cout << "���� ���� �л��� �й��� �Է��ϼ���: "; cin >> sendId;
		if (sendId == "����") {
			cout << acnt[0];
			cout << acnt[1];
			cout << acnt[2];
			return 0;
		}
		cout << "���� ���� �л��� �й��� �Է��ϼ���: "; cin >> recieveId;

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
			cout << "�й��� �ߺ��˴ϴ�." << endl;
		}

		else if(acnt[log_send].balance == 0 && (log_send!=10 && log_recieve!=10)) {
			cout << "������ �л��� �ܾ��� �����մϴ�." << endl;
		}

		else if (log_send == 10 || log_recieve ==10) {
			cout << "������ �л� Ȥ�� �޴� �л��� �������� �ʽ��ϴ�." << endl;
		}

		else {
			recieve = acnt[log_send] + acnt[log_recieve];
			send = acnt[log_send] - acnt[log_recieve];
			cout << "���� �л��� �й�: " << send;
			cout << "���� �л��� �й�: " << recieve;
		}
	}
	return 0;
}


Account::Account(string n, string i, int b) {
	name = n; id = i; balance = b;
}

Account operator+(Account& send,Account& recieve) { // a1�� ������ ��� a2�� �޴»��
	recieve.balance = send.balance + recieve.balance;
	return recieve;
}
Account operator-(Account& send,Account& recieve) { // a1�� ������ ��� a2�� �޴»��
	send.balance = 0;
	return send;
}

ostream &operator<<(ostream &os, const Account& arr) {
	os << "�й�: " << arr.id << " " << "�̸�: " << arr.name << " " << "�ܾ�: " << arr.balance << endl;
	return os;
}

