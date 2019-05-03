#include <iostream>
#include <string>
using namespace std;


class Cstudent {

public:
	
	Cstudent(){
		ID = 2018000000;
		Name = "홍길동";
		Major = "컴퓨터공학과";
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

	Cstudent s2(1999000000, "공지철", "연극영화과");
	s2.Display();
	
	
	s1.setNumber(2006000000);
	s1.setName("민경훈");
	s1.setMajor("포스트모던");
	cout << "학번 :" << s1.getNumber() << endl;
	cout << "이름 :" << s1.getName() << endl;
	cout << "전공 :" << s1.getMajor() << endl;
	
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
