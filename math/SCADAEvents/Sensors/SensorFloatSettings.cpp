/*
 * SensorsSettings.cpp
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#include "SensorFloatSettings.h"
#include "../Utils.h"

namespace Sensors
{

Sensors::SensorFloatSettings::SensorFloatSettings(const char* tagName,
		const float minWarning, const float maxWarning, const float minAlarm,
		const float maxAlarm) :
		SensorSettings(tagName)
{
	m_minWarningValue = minWarning;
	m_maxWarningValue = maxWarning;
	m_minAlarmValue = minAlarm;
	m_maxAlarmValue = maxAlarm;
}

float SensorFloatSettings::getMaxAlarmValue() const
{
	return m_maxAlarmValue;
}

void SensorFloatSettings::setMaxAlarmValue(float maxAlarmValue)
{
	m_maxAlarmValue = maxAlarmValue;
}

float SensorFloatSettings::getMaxWarningValue() const
{
	return m_maxWarningValue;
}

void SensorFloatSettings::setMaxWarningValue(float maxWarningValue)
{
	m_maxWarningValue = maxWarningValue;
}

float SensorFloatSettings::getMinAlarmValue() const
{
	return m_minAlarmValue;
}

void SensorFloatSettings::setMinAlarmValue(float minAlarmValue)
{
	m_minAlarmValue = minAlarmValue;
}

float SensorFloatSettings::getMinWarningValue() const
{
	return m_minWarningValue;
}

void SensorFloatSettings::setMinWarningValue(float minWarningValue)
{
	m_minWarningValue = minWarningValue;
}

} /* namespace Sensors */
