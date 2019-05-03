#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int n);

int main()
{
	int n;
	int *p;
	cout << "n : "; cin >> n;
	
	// *p�� nũ�⸸ŭ �����Ҵ�
	p = new int[n];

	// �Ǻ���ġ ������ ����Ͽ� *p�� ����
	
	for (int i = 0; i < n; i++) {
		p[i] = fibonacci(i);
	}
	
	// *p�� ����� �Ǻ���ġ ���� ���
	for (int i = 0; i < n; i++) {
		cout <<p[i]<<setw(3);
	}

	// ����� ���� *p�� ��������
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