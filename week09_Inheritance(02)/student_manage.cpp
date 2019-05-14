#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
	string name; //이름
	int id; //학번
	string department; //과
	int grade; //학년
	int credit; //이수학점

public:
	Student(string n = "default", unsigned int i = 0, string d = "default", int g = 0,
		int c = 0) : name(n), id(i), department(d), grade(g), credit(c) {}

	/* Getter, Setter 함수를 구현해주세요 */
	void Setter(string Name, int Id, string Depart, int Grade, int Credit) {
		this->name = Name;
		this->id = Id;
		this->department = Depart;
		this->grade = Grade;
		this->credit = Credit;
	}
	virtual string getName() {
		return name;
	}

	virtual int getId() {
		return id;
	}

	virtual string getDept() {
		return department;
	}

	virtual int getGrade() {
		return grade;
	}

	virtual int getCredit() {
		return credit;
	}

	/* 또한 virtual을 활용해서 print함수를 만들어주세요 */
	virtual void print();
};

class Graduate :public Student {
protected:
	bool Type;
	double Money;
public:
	Graduate(string n, unsigned int i, string d, int g, int c, bool t, double m) : Student(n, i, d, g, c) { 
		Money = m; Type = t;
		Setter(n, i, d, g, c);
	}
	string getType( ) {
		if (Type = false) { return "연구조교"; }
		else { return "교육조교"; }
	}

	double getMoney() {
		return Money;
	}

	void print()override {
		cout << "==================================" << endl;
		cout << "이  름 : " << getName() << endl;
		cout << "학  번 : " << getId() << endl;
		cout << "소속학과 : " << getDept() << endl;
		cout << "학  년 : " << getGrade() << endl;
		cout << "이수학점 : " << getCredit() << endl;
		cout << "조교유형 : " << getType() << endl;
		cout << "장학비율 : " << getMoney() << endl;
		cout << "==================================" << endl;
	}
};

class UnderGraduate :public Student {
protected:
	string SocialClub;
public:
	UnderGraduate(string n, unsigned int i, string d, int g, int c, string sc) : Student(n, i, d, g, c) {
		SocialClub = sc;
		Setter(n, i, d, g, c);
	}
	

	string getSC() {
		return SocialClub;
	}

	void print()override {
		cout << "==================================" << endl;
		cout << "이  름 : " << getName() << endl;
		cout << "학  번 : " << getId() << endl;
		cout << "소속학과 : " << getDept() << endl;
		cout << "학  년 : " << getGrade() << endl;
		cout << "이수학점 : " << getCredit() << endl;
		cout << "동아리명 : " << getSC() << endl;
		cout << "==================================" << endl;
	}
};


int main(void)
{
	Student Std;
	Graduate Kang("강석원", 2018311025, "컴퓨터공학과", 1, 18, false, 0.5);
	UnderGraduate Hong("홍길동", 20141111, "컴퓨터공학과", 2, 80, "알고리즘동아리");
	Std.print();
	Kang.print();
	Hong.print();
	return 0;
}


void Student::print()
{
	cout << "I'm student" << endl;
}

