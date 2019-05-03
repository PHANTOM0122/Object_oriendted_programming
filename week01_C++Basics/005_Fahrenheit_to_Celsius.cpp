#include <iostream>
using namespace std;

int main() {

	int Fah, Cel;

	cout << "Please enter Fahrenheit value: "; cin >> Fah;

	Cel = 5.0 / 9.0 * (Fah - 32);

	cout << "Celsius value is " << Cel;


}