/*
 * LevelSensor.cpp
 *
 *  Created on: 02.03.2014
 *      Author: timon
 */

#include "LevelSensor.h"

namespace Sensors
{

LevelSensor::LevelSensor(const char* tagName, const float value):
		SensorFloatValue(tagName, value)
{

}

LevelSensor::~LevelSensor()
{
	// TODO Auto-generated destructor stub
}

} /* namespace Sensors */
