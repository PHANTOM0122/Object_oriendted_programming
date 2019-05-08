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
	int mPeople; // ��� ��
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

	// ������ ����� Ÿ�� ������ �Լ�
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
	
		cout << i+1 << "����: "; cin >> takeoff >> takeon;
		k.station(takeoff, takeon);

		

		if (k.getPeople() > 250) {
			cout << "�����ʰ�"<<endl;
			exit(0);
		}

		else if (k.getPeople() < 0) {
			cout << "�����̴�" << endl;
			exit(0);
		}


		if (max < k.getPeople() ) {
			max = k.getPeople();
		}
	}
	cout << "���� ���� ����� ž�� ���� ���� ��� �� = " << max << endl;

	return 0;
}