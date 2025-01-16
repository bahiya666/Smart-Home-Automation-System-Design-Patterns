#include <exception>
#include <string>
using namespace std;

#ifndef __Alarm_h__
#define __Alarm_h__

#include "SmartDevice.h"

// class SmartDevice;
class Alarm;

class Alarm: public SmartDevice
{

	private:
        bool isActive;

	public:
		Alarm();
		void update(string condition); 
		string getStatus();
};

#endif
