#include <iostream>
#include <cmath>
using namespace std;

void pow(int *p) {

	int n = pow((*p),2);
	cout << "Á¦°ö°ª> " << n << endl;
}

int main() {


	int n;

	cout << "input> "; cin >> n;

	pow(&n);
	
	return 0;
}