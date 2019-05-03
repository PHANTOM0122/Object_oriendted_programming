#include <iostream>
#include <string>
using namespace std;

class Cstudent {

public:
	
	int ID;
	string Name;
	string Major;

	Cstudent() {}
	Cstudent(int student_ID, string student_name, string student_major) :ID(student_ID), Name(student_name), Major(student_major) {}
	~Cstudent(){}

	void setNumber(int);
	void setName(string);
	void setMajor(string);

	int getNumber();
	string getName();
	string getMajor();

	void Display();

	
};

int main() {

	Cstudent s[3]; // 3명의 학생정보를 저장할 class 배열
	int inputNumber; // 키보드로 학번을 입력 받을 변수
	string inputName, inputMajor; // 키보드로 이름,전공을 입력 받을 변수
	int length = 0; // 현재 입력된 학생의 수

	while (1)
	{
		

		for (int i = 0; i < 3; i++) {
			cout << length + 1 << "번째 학생 입력" << endl;
			cout << "학번: "; cin >> inputNumber;
			cout << "이름: "; cin >> inputName;
			cout << "전공: "; cin >> inputMajor;

			s[i].setNumber(inputNumber);
			s[i].setName(inputName);
			s[i].setMajor(inputMajor);


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
			length++;
		}


		cout << "--------모든입력이 완료되었습니다--------" << endl;
		for (int i = 0; i < 3; i++) {
			s[i].Display();
		}


		break;
		
	}
	return 0;
}


// set함수
void Cstudent::setNumber(int student_ID) {
	ID = student_ID;
}
void Cstudent::setName(string student_Name) {
	Name = student_Name;
}
void Cstudent::setMajor(string student_Major) {
	Major = student_Major;
}


//get함수
int Cstudent::getNumber() {
	return ID;
}
string Cstudent::getName() {
	return Name;
}
string Cstudent::getMajor() {
	return Major;
}

//출력함수
void Cstudent::Display() {
	cout << "학번 :" << getNumber() << endl;
	cout << "이름 :" << getName() << endl;
	cout << "전공 :" << getMajor() << endl;
	cout << endl;
}