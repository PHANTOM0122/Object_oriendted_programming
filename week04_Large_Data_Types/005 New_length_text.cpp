#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

int main() {

	string line;
	int N;
	cout << "length = "; cin >> N;
	
	ofstream myfile_result;
	ifstream myfile("input.txt");
	
	myfile_result.open("output.txt");

	if (myfile.is_open()) {
		char ch;
		int i = 0;
		while (myfile.get(ch)) {
			if (ch != '\n') {
				myfile_result << ch;
				++i;
			}
			if (i == N) {
				myfile_result << endl;
				i = 0;
			}
		}
	}
	
	myfile.close();
	myfile_result.close();
	return 0;
}