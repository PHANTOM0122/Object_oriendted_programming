#include <iostream>
using namespace std;

void print_DOB(int year, int month, int day) {

	cout << "나의 생년월일은 " << year << "년 " << month << "월 " << day << "일 입니다." << endl;
	cout << "year 입력 : "; cin >> year;
	cout << "month 입력 : "; cin >> month;
	cout << "day 입력 : "; cin >> day;

	cout << "나의 생년월일은 " << year << "년 " << month << "월 " << day << "일 입니다." << endl;
}


int main() {

	print_DOB (2000,1,1);

	return 0;
}

