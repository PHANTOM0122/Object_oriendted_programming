#include <iostream>
#include <cmath>
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

class Triangle : public Polygon 
{public:
	Triangle() {};
	Triangle(int point, float length) : Polygon(point, length) {}
	~Triangle() {};
	void calcGirth() override;
	void calcArea() override;
};
void Triangle::calcGirth() {
	cout << "Girth: " << mLength * mPoint << endl;
}
void Triangle::calcArea() {
	cout << "Aree: " << sqrt(3)/4 * mLength * mLength<<endl ;
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
void Rectangle::calcGirth() {
	cout << "Girth: " << mLength * mPoint << endl;
}
void Rectangle::calcArea() {
	cout << "Aree: " << mLength * mLength<<endl;
}

class Circle :public Polygon {
public:
	Circle() {}
	Circle(int point, float length) :Polygon(point,length) {}
	~Circle() {}
	void calcGirth() override;
	void calcArea() override;
};
void Circle::calcGirth() {
	cout << "Girth: " << (2*mLength) * 3.14 << endl;
}
void Circle::calcArea() {
	cout << "Aree: " << mLength * mLength * 3.14<<endl;
}


int main()
{
	Polygon pol;
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);
	cout << "--- Triangle class ---" << endl;
	tri.calcGirth();
	tri.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();
	cout << "--- Circle class ---" << endl;
	cir.calcGirth();
	cir.calcArea();
	return 0;
}







