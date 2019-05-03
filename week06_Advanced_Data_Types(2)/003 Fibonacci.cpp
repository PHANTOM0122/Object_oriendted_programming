#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int n);

int main()
{
	int n;
	int *p;
	cout << "n : "; cin >> n;
	
	// *p를 n크기만큼 동적할당
	p = new int[n];

	// 피보나치 수열을 계산하여 *p에 저장
	
	for (int i = 0; i < n; i++) {
		p[i] = fibonacci(i);
	}
	
	// *p에 저장된 피보나치 수열 출력
	for (int i = 0; i < n; i++) {
		cout <<p[i]<<setw(3);
	}

	// 사용이 끝난 *p를 동적해제
	delete[] p;
	return 0;
}

int fibonacci(int n) {

	if (n == 0) {
		return 0;
	}

	else if (n == 1) {
		return 1;
	}

	else {
		return fibonacci(n - 2) + fibonacci(n - 1);
	}
}