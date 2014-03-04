/*
 * PressureSensor.cpp
 *
 *  Created on: 02.03.2014
 *      Author: timon
 */

#include "PressureSensor.h"

namespace Sensors
{

PressureSensor::PressureSensor(const char* tagName, const float value):
		SensorFloatValue(tagName, value)
{
}

PressureSensor::~PressureSensor()
{
	// TODO Auto-generated destructor stub
}

} /* namespace Sensors */
