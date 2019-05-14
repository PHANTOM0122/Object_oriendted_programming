#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
	string name; //�̸�
	int id; //�й�
	string department; //��
	int grade; //�г�
	int credit; //�̼�����

public:
	Student(string n = "default", unsigned int i = 0, string d = "default", int g = 0,
		int c = 0) : name(n), id(i), department(d), grade(g), credit(c) {}

	/* Getter, Setter �Լ��� �������ּ��� */
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

	/* ���� virtual�� Ȱ���ؼ� print�Լ��� ������ּ��� */
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
		if (Type = false) { return "��������"; }
		else { return "��������"; }
	}

	double getMoney() {
		return Money;
	}

	void print()override {
		cout << "==================================" << endl;
		cout << "��  �� : " << getName() << endl;
		cout << "��  �� : " << getId() << endl;
		cout << "�Ҽ��а� : " << getDept() << endl;
		cout << "��  �� : " << getGrade() << endl;
		cout << "�̼����� : " << getCredit() << endl;
		cout << "�������� : " << getType() << endl;
		cout << "���к��� : " << getMoney() << endl;
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
		cout << "��  �� : " << getName() << endl;
		cout << "��  �� : " << getId() << endl;
		cout << "�Ҽ��а� : " << getDept() << endl;
		cout << "��  �� : " << getGrade() << endl;
		cout << "�̼����� : " << getCredit() << endl;
		cout << "���Ƹ��� : " << getSC() << endl;
		cout << "==================================" << endl;
	}
};


int main(void)
{
	Student Std;
	Graduate Kang("������", 2018311025, "��ǻ�Ͱ��а�", 1, 18, false, 0.5);
	UnderGraduate Hong("ȫ�浿", 20141111, "��ǻ�Ͱ��а�", 2, 80, "�˰��򵿾Ƹ�");
	Std.print();
	Kang.print();
	Hong.print();
	return 0;
}


void Student::print()
{
	cout << "I'm student" << endl;
}

