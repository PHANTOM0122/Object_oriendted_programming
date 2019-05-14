#include <iostream>
using namespace std;

class Stack {
private:
	int* p_list;// 정수형 변수들을 가지는 배열
	int size;//현재 저장된 변수들의 개수
	int MAX_SIZE; // 최대로 저장할 수 있는 p_list 크기

public:
	Stack(int _MAX_SIZE = 1000) {// 생성자: P_list 크기를 MAX_SIZE만큼 동적할당
		MAX_SIZE = _MAX_SIZE;
		p_list = new int[MAX_SIZE];
		size = 0;
	} 
	~Stack() {	
		delete[] p_list;
	}

	int find_index(int _item) { // p_list에서 _item과 동일한 값이 있는지 검색 후 발견시 index를 반환한다 만약 발견하지 못하면 -1을 반환한다.
		
		int index = -1;
		
		for (int i = 0; i < MAX_SIZE; i++) {
			if (p_list[i] == _item) {
				index = i;
			}
		}
		return index;
	}

	void push(int _item) {

		// 입력item을 p_list의 끝에 저장한다.
		
		if (size > MAX_SIZE) {
			cout << "Error : No items exists in the list" << endl;
		}
		
		if (find_index(_item) == -1) {
			p_list[size] = _item;
			size++;
		}

		
	}

	int pop() {
		if (size == 0) {
			cout << "Error: No item exists in the list" << endl;
		}
		else {
			size = size - 1;
			return p_list[size + 1];
		}
	}

	void print(){
		cout << "Items in the list: ";
		for (int i = 0; i < size; i++) {
			cout << p_list[i] << " ";
		}
		cout << endl;
	}

	int get_size() {
		return size;
	}

	int get_item(int _index) {
		return p_list[_index];
	}

	
	friend Stack operator += (Stack& s1, Stack& s2);
	friend bool operator == (const Stack& s1, const Stack& s2);

};

Stack operator += (Stack& s1, Stack& s2) {
	
	for (int i = 0; i < s1.get_size(); i++) {
		if (s1.get_item(i) != s2.get_item(i)) { 
			s1.push(s2.get_item(i)); 
		}
	}

	for (int i = 0; i < s1.get_size();i++) {
		return s1.get_item(i);
	}
	
}

bool operator == (Stack& s1, Stack& s2) {
	bool t = false;
	for (unsigned i = 0; i < s1.get_size(); i++) {
		if (s1.get_item(i) == s2.get_item(i) && s1.get_size() == s2.get_size()) { t = true; }
	}
	return t;
}

int main() {

	Stack s1, s2;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s2.push(1);
	s2.push(2);
	s2.push(5);

	

	s1.print();
	s2.print();
	s1 += s2;
	s1.print();
	s2.print();
	cout << "s1 == s2 ? " << (s1 == s2) << endl;
	s1.pop(); // 5 out
	s1.pop(); // 3 out
	s2.pop(); // 5 out
	cout << "s1 == s2 ? " << (s1 == s2) << endl;
	s2.pop();
	s2.pop();
	s2.pop();

	return 0;
}