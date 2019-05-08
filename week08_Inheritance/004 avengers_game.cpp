#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Avengers
{
public:
	Avengers() {
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	~Avengers() {}
	
	//캐릭터 설정 함수
	virtual void set(string _name, int _attack, int _defense, int _health)
	{
	}
	//공격 함수
	virtual int attack()
	{
		return 0;
	}
	//방어 함수
	virtual void defense(int _attack_point)
	{
	}
	//캐릭터 정보 출력 함수
	virtual void print_info()
	{
	}
protected:
	string name;//캐릭터 이름
	int attack_point;//공격력
	int defense_point;//방어력
	int health;//체력
};


class Character : public Avengers
{
public:
	Character() {}
	~Character() {}

	void set(string _name, int _attack, int _defense, int _health) override{
		name = _name; attack_point = _attack; defense_point = _defense; health = _health;
	}
	int attack() override{
		return attack_point;
	}
	void defense (int _attack_point) override
	{
		health = health - _attack_point + defense_point;
	}

	void print_info() override{
		cout << "Name: " << name << endl;
		cout << "Attack_Point: " << attack_point << endl;
		cout << "Defense_Point: " << defense_point << endl;
		cout << "Health: " << health << endl;
	}
	int get_health() { return health; }
};




int main()
{
	Character my_char;
	Character enemy_char;
	
	//my character set
	string my;
	cout << "Choose your character(IronMan, CaptainAmerica, Thor) : "; cin >> my;
	if (my == "IronMan") {
		my_char.set("IronMan", 70, 40, 100);
	}
	else if (my == "CaptainAmerica") {
		my_char.set("CaptainAmerica", 60, 50, 100);
	}
	else if (my == "Thor") {
		my_char.set("Thor", 80, 30, 100);
	}
	
	// enemy character set
	int com = rand()%3;

	switch (com) {
	case 0: enemy_char.set("IronMan", 70, 40, 100); break;
	case 1: enemy_char.set("CaptainAmerica", 60, 50, 100); break;
	case 2: enemy_char.set("Thor", 80, 30, 100); break;
	}
	
	//print my,enemy character info
	cout << "--My character--" << endl;
	my_char.print_info();
	cout << "--Enemy character--" << endl;
	enemy_char.print_info();

	


	cout << endl << "--Battle--" << endl;
	cout << "My Life: " << my_char.get_health() << "\t"<< "Enemy Life:" << enemy_char.get_health() << endl;

	while (1)
	{	
		enemy_char.defense(my_char.attack());
		cout << "My Life: " << my_char.get_health() << "\t" << "Enemy Life:" << enemy_char.get_health() << endl;
		// 체력 0이하면 종료
		if (my_char.get_health() <= 0 || enemy_char.get_health() <= 0) {
			break;
		}

		my_char.defense(enemy_char.attack());
		cout << "My Life: " << my_char.get_health() << "\t" << "Enemy Life:" << enemy_char.get_health() << endl;
		if (my_char.get_health() <= 0 || enemy_char.get_health() <= 0) {
			break;
		}
	
	
	}

	if (my_char.get_health() > enemy_char.get_health()) { cout << "You win!"; }
	else { cout << "You lose"; }
	return 0;
}
