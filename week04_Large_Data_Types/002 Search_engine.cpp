#include <iostream>
#include <string>

using namespace std;

int main() {

	string database[] = { "���", "���α׷���", "����", "����ǹٺ�", "���뿪", "õ���ǻ��", "�����", "��ü����" };
	string search;

	cout << "Ű����: "; cin >> search;
	
	cout << "�˻����: ";
	for (int i = 0; i < 8; i++) {

		if (database[i].find(search) <database[i].length()) {
			cout<< database[i]<<"\t";
			
		}
	}
	

	return 0;
}