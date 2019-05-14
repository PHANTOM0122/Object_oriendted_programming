#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void startGame(int[],int[]);

int main() {
	int input[3];
	int answer[3];
	int((unsigned)time(NULL));
	
	// �Է¹ޱ�
	while (true) {

		cout << "=======" << 1 << "========" << endl;
		cout << "1~9 ������ ���� 3���� �Է����ּ��� : ";

		for (int i = 0; i < 3; i++) {
			cin >> input[i];
		}
		if (input[0] >=10 || input[1] >=10 || input[2]>=10) { cout << "1~9 ���� ���� ���ڸ� �Է��Ͻÿ�." << endl; }

		for (int i = 0; i < 3; i++) {
				answer[i] = rand() % 9 + 1;
		}

		if (input[0] == input[1] && input[1] == input[2]) { cout << "�ߺ��� ���ڸ� �Է��ϼ̽��ϴ�" << endl; }
		else { break; }	
		
	}
	
	//���� ����
	startGame(input, answer);
	return 0;
}


void startGame(int Input[], int Answer[])
{	int num = 2;

	while (true) {
		
	int strike = 0, ball = 0;

		// strike
		for (int i = 0; i < 3; i++) {
			if (Input[i] == Answer[i]) {
				strike++;
			}
		}

		// ball
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (Input[i] == Answer[j] && i != j) {
					ball++;
				}
			}
		}

		//print
		if (strike == 0 && ball == 0) {
			cout << "Out!";
			break;
		}

		// ��ǻ�� ���� ���
		cout << "Computer: " << Answer[0] << " " << Answer[1] << " " << Answer[2] << endl;

		//stirke,ball �� ���
		cout << strike << "Strike," << " " << ball << "Ball" << endl;
		cout << endl;

		// ���Է�
		cout << "=======" << num << "========" << endl;
		while (true) {

			cout << "1~9 ������ ���� 3���� �Է����ּ��� : ";

			for (int i = 0; i < 3; i++) {
				cin >> Input[i];
			}
			if (Input[0] >= 10 || Input[1] >= 10 || Input[2] >= 10) { cout << "1~9 ���� ���� ���ڸ� �Է��Ͻÿ�." << endl; }

			for (int i = 0; i < 3; i++) {
				Answer[i] = rand() % 9 + 1;
			}

			if (Input[0] == Input[1] && Input[1] == Input[2]) { cout << "�ߺ��� ���ڸ� �Է��ϼ̽��ϴ�" << endl; }
			else { break; }
		}
		num++;
	}
}

