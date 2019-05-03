#include <iostream>
#include <string>
using namespace std;

void get_String(string *Str);

int main() {

	string str = "This is default value";

	cout << "기본값 출력> " << str << endl;

	get_String(&str);

	cout << "변환된 값 출력> " << str << endl;

	return 0;
}

void get_String(string *Str) {

	string new_Str;

	cout << "input> "; cin >> new_Str;

	*Str = new_Str;
}