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
	m_state = ValveState::UNDEFINED;
}

ValveSensor::~ValveSensor()
{

}

void ValveSensor::beginOpening()
{
	m_state = ValveState::OPENING;
}

void ValveSensor::beginClosing()
{
	m_state = ValveState::CLOSING;
}

void ValveSensor::stopCurrentOperation()
{
	m_state = ValveState::STOPPED;
}

float ValveSensor::getCurrentOpeningPercent()
{
	return getValue();
}

void ValveSensor::ecuCrashed()
{
}

} /* namespace Sensors */
