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
	m_state = GateState::UNDEFINED;
}

GateSensor::~GateSensor()
{
	// TODO Auto-generated destructor stub
}

void GateSensor::beginOpening()
{
	m_state = GateState::OPENING;
}

void GateSensor::beginClosing()
{
	m_state = GateState::CLOSING;
}

void GateSensor::stopCurrentOperation()
{
	m_state = GateState::STOPPED;
}

bool GateSensor::isOpen() const
{
	return m_state == GateState::OPEN;
}

bool GateSensor::isClose() const
{
	return m_state == GateState::CLOSED;
}

void GateSensor::ecuCrashed()
{
}
} /* namespace Sensors */
