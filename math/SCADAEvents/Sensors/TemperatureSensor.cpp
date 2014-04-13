/*
 * TemperatureSensor.cpp
 *
 *  Created on: 02.03.2014
 *      Author: timon
 */

#include "TemperatureSensor.h"

namespace Sensors
{

TemperatureSensor::TemperatureSensor(const char* tagName, const float value):
		SensorFloatValue(tagName, value)
{
}

TemperatureSensor::~TemperatureSensor()
{

}

} /* namespace Sensors */
