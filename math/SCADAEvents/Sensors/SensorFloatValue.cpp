/*
 * SensorFloatValue.cpp
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#include "SensorFloatValue.h"
namespace Sensors
{
Sensors::SensorFloatValue::SensorFloatValue(const char* tagName,
		const float value) :
		SensorValue(tagName)
{
	m_value = value;
}

float SensorFloatValue::getValue() const
{
	return m_value;
}

}/* namespace Sensors */

