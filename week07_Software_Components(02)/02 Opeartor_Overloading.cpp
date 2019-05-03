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
	cout << "첫번째 좌표[x1, y1]를 입력하세요 : ";
	cin >> x1 >> y1;
	cout << "두번째 좌표[x2, y2]를 입력하세요 : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point(); //x,y가 0으로 초기화
	

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);
	
	/* pP3을 활용하여 거리값을 구하세요 */
	double d = sqrt(pP3->x + pP3->y);
	cout << "두 좌표 사이의 길이는 " << d<< "입니다" << endl;;


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
