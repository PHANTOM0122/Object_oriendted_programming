#include <iostream>
using namespace std;

void print_DOB(int year, int month, int day) {

	cout << "���� ��������� " << year << "�� " << month << "�� " << day << "�� �Դϴ�." << endl;
	cout << "year �Է� : "; cin >> year;
	cout << "month �Է� : "; cin >> month;
	cout << "day �Է� : "; cin >> day;

	cout << "���� ��������� " << year << "�� " << month << "�� " << day << "�� �Դϴ�." << endl;
}


int main() {

	print_DOB (2000,1,1);

	return 0;
}

