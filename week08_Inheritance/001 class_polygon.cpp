#include <iostream>
using namespace std;

class Polygon {
public:
	Polygon();
	Polygon(int point, float length);
	~Polygon();
	virtual void calcGirth();
	virtual void calcArea();
protected:
	int mPoint; // 꼭지점 갯수
	double mLength; // 한 변의 길이
};

Polygon::Polygon() {}
Polygon::Polygon(int point, float length) {
	mPoint = point;  mLength = length;
}
Polygon::~Polygon() {}
void Polygon::calcGirth() {
	cout << "Girth: empty" << endl;
}
void Polygon::calcArea() {
	cout << "Aree: empty" << endl;
}

class Rectangle : public Polygon
{
public:
	Rectangle() {}
	Rectangle(int point, float length) : Polygon(point, length) {}
	~Rectangle() {}
	void calcGirth() override;
	void calcArea() override;
};	


void Rectangle::calcGirth(){
	cout << "Girth: " << mLength * mPoint << endl;
}

void Rectangle::calcArea(){
	cout << "Aree: " << mLength * mLength;
}


int main()
{
	Polygon pol;
	Rectangle rec(4, 10);
	cout << "--- Polygon class ---" << endl;
	pol.calcGirth();
	pol.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();
	return 0;
}

