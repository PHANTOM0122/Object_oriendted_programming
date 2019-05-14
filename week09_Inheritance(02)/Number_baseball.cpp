#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void startGame(int[],int[]);

int main() {
	int input[3];
	int answer[3];
	int((unsigned)time(NULL));
	
	// 입력받기
	while (true) {

		cout << "=======" << 1 << "========" << endl;
		cout << "1~9 범위의 숫자 3개를 입력해주세요 : ";

		for (int i = 0; i < 3; i++) {
			cin >> input[i];
		}
		if (input[0] >=10 || input[1] >=10 || input[2]>=10) { cout << "1~9 범위 내의 숫자를 입력하시오." << endl; }

		for (int i = 0; i < 3; i++) {
				answer[i] = rand() % 9 + 1;
		}

		if (input[0] == input[1] && input[1] == input[2]) { cout << "중복된 숫자를 입력하셨습니다" << endl; }
		else { break; }	
		
	}
	
	//게임 시작
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

		// 컴퓨터 상태 출력
		cout << "Computer: " << Answer[0] << " " << Answer[1] << " " << Answer[2] << endl;

		//stirke,ball 수 출력
		cout << strike << "Strike," << " " << ball << "Ball" << endl;
		cout << endl;

		// 재입력
		cout << "=======" << num << "========" << endl;
		while (true) {

			cout << "1~9 범위의 숫자 3개를 입력해주세요 : ";

			for (int i = 0; i < 3; i++) {
				cin >> Input[i];
			}
			if (Input[0] >= 10 || Input[1] >= 10 || Input[2] >= 10) { cout << "1~9 범위 내의 숫자를 입력하시오." << endl; }

			for (int i = 0; i < 3; i++) {
				Answer[i] = rand() % 9 + 1;
			}

			if (Input[0] == Input[1] && Input[1] == Input[2]) { cout << "중복된 숫자를 입력하셨습니다" << endl; }
			else { break; }
		}
		num++;
	}
}

