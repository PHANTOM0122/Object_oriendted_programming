#include "Camera.h"
class Phone : private Camera{
public:
	void Callup(int number);
	void HangUP();
	void Photomail(int number);

};