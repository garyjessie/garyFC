#include <iostream>

#include "AP_Math.h"
#include "LowPassFilter2p.h"

using namespace std;

int main(void)
{
	Vector3f v3f(1.0f, 2.0f, 3.0f);
	LowPassFilter2pFloat filter(50,30);
	
	cout << "hello demo" << endl;

	cout << "x=" << v3f.x << endl;
	cout << "y=" << v3f.y << endl;
	cout << "z=" << v3f.z << endl;

	return 0;
}
