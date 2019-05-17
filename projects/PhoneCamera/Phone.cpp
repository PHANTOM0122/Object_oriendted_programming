#include "Phone.h"
#pragma once
#include <iostream>
using namespace std;

void Phone::Callup(int number)
{
	cout << "Call up..." << number << endl;
}

void Phone::HangUP()
{
	cout << "Hang up..." << endl;
}

void Phone::Photomail(int number)
{
	Photograph();
	Callup(number);
}
