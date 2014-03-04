/*
 * GateSensor.cpp
 *
 *  Created on: 02.03.2014
 *      Author: timon
 */

#include "GateSensor.h"

namespace Sensors
{

GateSensor::GateSensor(const char* tagName, const float value):
		SensorFloatValue(tagName, value)
{
}

GateSensor::~GateSensor()
{
	// TODO Auto-generated destructor stub
}

void GateSensor::beginOpening()
{
}

void GateSensor::beginClosing()
{
}

void GateSensor::stopCurrentOperation()
{
}

bool GateSensor::isOpen() const
{
}

bool GateSensor::isClose() const
{
}

void GateSensor::ecuCrashed()
{
}
} /* namespace Sensors */
