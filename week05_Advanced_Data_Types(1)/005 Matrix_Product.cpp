#include <iostream>
#include <vector>
#include <stdlib.h>
#include <iomanip>
using namespace std;

void get_Matrix(vector<vector<int>>& m, int row, int col);
void print_Matrix(vector<vector<int>> m, int row, int col);
void Matrix_times(vector<vector<int>> m1, vector<vector<int>> m2, vector<vector<int>> result, int row_m1, int col_m1, int row_m2, int col_m2);

int main() {

	int row_A, col_A;
	int row_B, col_B;

	cout << "A의 행, 열의 크기를 입력하시오: "; cin >> row_A >> col_A;
	cout << "B의 행, 열의 크기를 입력하시오: "; cin >> row_B >> col_B;

	// 2차원 벡터 선언
	vector<vector<int>> A(row_A, vector<int>(col_A));
	vector<vector<int>> B(row_B, vector<int>(col_B));
	vector<vector<int>> AB(row_A, vector<int>(col_B));

	get_Matrix(A, row_A, col_A);
	get_Matrix(B, row_B, col_B);

	cout << "A 행렬: " << endl;
	print_Matrix(A, row_A, col_A);

	cout << "B 행렬: " << endl;
	print_Matrix(B, row_B, col_B);

	Matrix_times(A, B, AB, row_A, col_A, row_B, col_B);


	return 0;
}

void get_Matrix(vector<vector<int>>& m, int row, int col){

	// vector 값 지정
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {

			m[i][j] = (rand() % 19) - 9;
		}
	}
}

void print_Matrix(vector<vector<int>> m, int row, int col){
	
	for (vector<int>& row : m) {
		for (int elem : row)
			cout << setw(5) << elem;
		cout << endl;
	}
	cout << endl;
}


void Matrix_times(vector<vector<int>> m1, vector<vector<int>> m2, vector<vector<int>> result, int row_m1, int col_m1, int row_m2, int col_m2){
	int sum = 0;
	if (col_m1 == row_m2) {

		cout << "AB의 곱셉" << endl;


		
		for (int i = 0; i < row_m1; i++) { // result의 행만큼 수행
			for (int j = 0; j < col_m2; j++) { // result의 열만큼 수행
				for (int k = 0; k < col_m1; k++) {
					sum =  sum + m1[i][k] * m2[k][j];
				}
				result[i][j] = sum;
				sum = 0;
			}
		}

		for (int i=0; i<row_m1;i++){
			for (int j = 0; j < col_m2; j++) {
				cout << setw(5) <<result[i][j];
			}
			cout << endl;
		}


	}

	else { cout << "두 행렬을 곱할 수 없습니다."; }
}