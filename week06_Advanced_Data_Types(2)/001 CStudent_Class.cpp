#include <iostream>
#include <string>
using namespace std;


class Cstudent {

public:
	
	Cstudent(){
		ID = 2018000000;
		Name = "ȫ�浿";
		Major = "��ǻ�Ͱ��а�";
	}
	Cstudent(int student_ID, string student_name, string student_major):ID(student_ID),Name(student_name),Major(student_major){}
	~Cstudent() {}

	void setNumber(int);
	void setName(string);
	void setMajor(string);

	int getNumber();
	string getName();
	string getMajor();

	void Display();

private:
	int ID;
	string Name;
	string Major;
};


int main() {

	Cstudent s1;
	s1.Display();

	Cstudent s2(1999000000, "����ö", "���ؿ�ȭ��");
	s2.Display();
	
	
	s1.setNumber(2006000000);
	s1.setName("�ΰ���");
	s1.setMajor("����Ʈ���");
	cout << "�й� :" << s1.getNumber() << endl;
	cout << "�̸� :" << s1.getName() << endl;
	cout << "���� :" << s1.getMajor() << endl;
	
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
