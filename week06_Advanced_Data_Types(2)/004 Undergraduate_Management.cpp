#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {

public:
	
	string name;
	int id;
	string major;
	vector<string> subject;
	vector<char> grade;


	
	Student(string Name, int ID, string Major):name(Name), id(ID), major(Major) {}
	Student() :
		name("default"), id(0), major("depart") {

	}
	
	void setID(int input_id){
		id = input_id;
	}
	void setName(string input_name){
		name = input_name;
	}
	void setDept(string input_dept) {
		major = input_dept;
	}
	void print() {
		cout << name << " " << id << " " << major << endl;
	}
	void addGrade(string m, char s) {
		subject.push_back(m);
		grade.push_back(s);
	}

	void printGrades() {
		for (unsigned i = 0; i < subject.size(); i++) {
			cout << subject[i] << ' ' << grade[i] << endl;
		}
		getGPA();
	}

	void getGPA() {
		float sum = 0;
		for (unsigned i = 0; i < grade.size(); i++) {
			switch (grade[i])
			{
			case 'A':
				sum += 4;
				break;
			case 'B':
				sum += 3;
				break;
			case 'C':
				sum += 2;
				break;
			case 'D':
				sum += 1;
				break;
			case 'F':
				break;
			default:
				break;
			}
		}
		sum = sum / grade.size();
		cout << "GPA : " << sum << endl;
	}

	void getYear(int n) {
		if (n == 2019) { cout << "Freshman"<<endl; }
		else if (n == 2018) { cout << "Sophomore"<<endl; }
		else if (n == 2017) { cout << "Junior"<<endl; }
		else if (n == 2016) { cout << "Senior"<<endl; }
		else { cout << "About to graduate"<<endl; }
	}
};


int main() {

	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	cout << "\n\n";


	Student ron;
	ron.print();
	cout << endl;
	ron.setName("Ron");
	ron.setID(2014103959);
	ron.setDept("EE");
	ron.print();
	ron.getYear(2019);
	ron.addGrade("Computer Architecture", 'B');
	ron.addGrade("Maching Learning", 'B');
	ron.addGrade("Computer Vision", 'C');
	ron.printGrades();

	return 0;
}

