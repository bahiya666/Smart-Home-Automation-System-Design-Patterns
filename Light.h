#include <exception>
#include <string>
using namespace std;

#ifndef __Light_h__
#define __Light_h__

#include "SmartDevice.h"

// class SmartDevice;
class Light;

class Light: public SmartDevice
{

	public: 
		Light();
		void update(string condition);
		string getStatus();
		
};

#endif
