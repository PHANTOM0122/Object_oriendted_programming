#include <iostream>
using namespace std;

/*
int gcd(int a, int b) {

	while (b != 0) {
	int r = a % b;
	a = b;
	b = r;
	}
	return a;
}*/
int gcd(int a, int b) {

	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a%b);
	}
}

int gcm(int a, int b) {
	return (a*b) / gcd(a, b);
}

int main() {

	int a, b;
	cin >> a;
	cin >> b;
	cout << "gcd("<<a<<","<<b<<") = "<<gcd(a, b)<<endl;
	cout << "gcm("<<a<<","<<b<<") = "<<gcm(a, b)<<endl;
	return 0;
}