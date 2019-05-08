#include <iostream>
using namespace std;

class Train {
public:
	Train() {}
	Train(int people)
	{
		mPeople = people;
	}
	~Train() {}
	virtual int station(int takeOff, int takeOn);
protected:
	int mPeople; // 사람 수
};

int Train::station(int takeOff, int takeOn) {
	return 0;
}

class Ktx : public Train
{
public:
	Ktx() : Train(0) {}
	Ktx(int people) : Train(people)
	{}
	~Ktx() {}

	// 기차에 사람이 타고 내리는 함수
	int station(int takeOff, int takeOn) override;
	int getPeople();
};

int Ktx::station(int takeoff, int takeon) {
	mPeople = mPeople + takeon - takeoff;
	return mPeople;
}

int Ktx::getPeople() {
	return mPeople;
}

int main()
{
	Ktx k;
	int max = 0;
	int takeoff, takeon;

	for (int i = 0; i < 5; i++) {
	
		cout << i+1 << "번역: "; cin >> takeoff >> takeon;
		k.station(takeoff, takeon);

		

		if (k.getPeople() > 250) {
			cout << "정원초과"<<endl;
			exit(0);
		}

		else if (k.getPeople() < 0) {
			cout << "정원미달" << endl;
			exit(0);
		}


		if (max < k.getPeople() ) {
			max = k.getPeople();
		}
	}
	cout << "가장 많은 사람이 탑승 했을 때의 사람 수 = " << max << endl;

	return 0;
}