#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	ofstream Temp;
	Temp.open("temp.txt");

	if (Temp.is_open()) {

		srand((unsigned int)time(NULL));
		for (int i = 0; i < 10; i++) {

			for (int j = 0; j < 10; j++) {
				Temp << rand() % 100 + 1 << "\t";
			}

			Temp << endl;

		}
	}

	Temp.close();

	return 0;
}