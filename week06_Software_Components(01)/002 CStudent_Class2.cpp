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

	Cstudent s[3]; // 3���� �л������� ������ class �迭
	int inputNumber; // Ű����� �й��� �Է� ���� ����
	string inputName, inputMajor; // Ű����� �̸�,������ �Է� ���� ����
	int length = 0; // ���� �Էµ� �л��� ��

	while (1)
	{
		

		for (int i = 0; i < 3; i++) {
			cout << length + 1 << "��° �л� �Է�" << endl;
			cout << "�й�: "; cin >> inputNumber;
			cout << "�̸�: "; cin >> inputName;
			cout << "����: "; cin >> inputMajor;

			s[i].setNumber(inputNumber);
			s[i].setName(inputName);
			s[i].setMajor(inputMajor);


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
			length++;
		}


		cout << "--------����Է��� �Ϸ�Ǿ����ϴ�--------" << endl;
		for (int i = 0; i < 3; i++) {
			s[i].Display();
		}


		break;
		
	}
	return 0;
}


// set�Լ�
void Cstudent::setNumber(int student_ID) {
	ID = student_ID;
}
void Cstudent::setName(string student_Name) {
	Name = student_Name;
}
void Cstudent::setMajor(string student_Major) {
	Major = student_Major;
}


//get�Լ�
int Cstudent::getNumber() {
	return ID;
}
string Cstudent::getName() {
	return Name;
}
string Cstudent::getMajor() {
	return Major;
}

//����Լ�
void Cstudent::Display() {
	cout << "�й� :" << getNumber() << endl;
	cout << "�̸� :" << getName() << endl;
	cout << "���� :" << getMajor() << endl;
	cout << endl;
}