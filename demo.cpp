#include <iostream>

#include "AP_HAL.h"

#include "AP_Math.h"
#include "LowPassFilter2p.h"


using namespace std;

int main(void)
{

	uint64_t time;

	Vector3f a(1.0f, 2.0f, 3.0f);
	Vector3f b(1.0f, 2.0f, 3.0f);
	Vector3f c;


	LowPassFilter2pFloat filter(50,30);
	
	cout << "hello cmake!" << endl;

	c = a+b;
		
	time = AP_HAL::micros64();

	cout << time << endl;


	cout << "c.x=" << c.x << endl;
	cout << "c.y=" << c.y << endl;
	cout << "c.z=" << c.z << endl;

	return 0;
}
