#include <iostream>
using namespace std;

void swap_call_by_value(int x, int y) {

	
	int temp = x;
	x = y;
	y = temp;
	
}

void swap_call_by_refernce(int& x, int& y){
	
	int temp = x;
	x = y;
	y = temp;
	
}

void get_data(int &x, int &y) {

	cout << "x 입력 : "; cin >> x;
	cout << "y 입력 : "; cin >> y;
	
}

int main() {

	int x, y;
	get_data(x, y); cout << endl;
	
	cout << "swap_call_by_value 함수 사용 전" << endl;
	cout << "X = " << x << ","; cout << "Y = " << y << endl;
	cout << "swap_call_by_value 함수 사용 후" << endl;
	swap_call_by_value(x, y); 
	cout << "X = " << x << ","; cout << "Y = " << y << endl;

	cout << endl;

	cout << "swap_call_by_reference 함수 사용 전" << endl;
	cout << "X = " << x << ","; cout << "Y = " << y << endl;
	cout << "swap_call_by_reference 함수 사용 후" << endl;
	swap_call_by_refernce(x, y); 
	cout << "X = " << x << ","; cout << "Y = " << y << endl;

}

