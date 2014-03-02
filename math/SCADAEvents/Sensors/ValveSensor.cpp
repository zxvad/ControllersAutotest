/*
 * ValveSensor.cpp
 *
 *  Created on: 02.03.2014
 *      Author: timon
 */

#include "ValveSensor.h"

namespace Sensors
{

ValveSensor::ValveSensor(const char* tagName, const float value):
		SensorFloatValue(tagName, value)
{
}

ValveSensor::~ValveSensor()
{
	// TODO Auto-generated destructor stub
}

void ValveSensor::beginOpening()
{
}

void ValveSensor::beginClosing()
{
}

void ValveSensor::stopCurrentOperation()
{
}

float ValveSensor::getCurrentOpeningPercent()
{
	return 0;
}

void ValveSensor::ecuCrashed()
{
}

} /* namespace Sensors */
