#include <iostream>
#include <cmath>
using namespace std;


class Point {
public:
	double x;
	double y;

	Point();
	Point(double, double);
	friend Point operator-(const Point& p1, const Point& p2);
	friend Point operator*(const Point& p1, const Point& p2);


	
};

int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point *pP1, *pP2, *pP3;
	cout << "ù��° ��ǥ[x1, y1]�� �Է��ϼ��� : ";
	cin >> x1 >> y1;
	cout << "�ι�° ��ǥ[x2, y2]�� �Է��ϼ��� : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point(); //x,y�� 0���� �ʱ�ȭ
	

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);
	
	/* pP3�� Ȱ���Ͽ� �Ÿ����� ���ϼ��� */
	double d = sqrt(pP3->x + pP3->y);
	cout << "�� ��ǥ ������ ���̴� " << d<< "�Դϴ�" << endl;;


	delete pP1;
	delete pP2;
	delete pP3;

	return 0;
}

Point::Point() {
	x = 0; y = 0;
}
Point::Point(double a, double b) {
	x = a; y = b;
}
Point operator-(const Point& p1, const Point& p2){
	Point result;
	result.x = p1.x - p2.x;
	result.y = p1.y - p2.y;
	return result;
}
Point operator*(const Point& p1, const Point& p2) {
	Point result;
	result.x = (p1.x) * (p2.x);
	result.y = (p1.y) * (p2.y);
	return result;
}
