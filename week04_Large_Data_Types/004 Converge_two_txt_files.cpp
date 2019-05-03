#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main() {
	string line;

	ofstream myfile;
	ifstream myfile1;ifstream myfile2;

	myfile.open("Example_1&2.txt");
	myfile1.open("input1.txt");
	if (myfile1.is_open()) 
	{
		while(getline(myfile1, line)) {
			myfile << line << endl;
			
		}
	}
	myfile1.close();

	myfile << endl;

	myfile2.open("input2.txt");
	if (myfile2.is_open()) {

		while (getline(myfile2, line)) {
			myfile << line << endl;
		}
	}

	
	myfile2.close();

	
	myfile.close();







	return 0;
}