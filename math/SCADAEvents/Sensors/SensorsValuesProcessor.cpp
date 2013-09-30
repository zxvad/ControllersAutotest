/*
 * SensorsValuesProcessor.cpp
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#include "SensorsValuesProcessor.h"
#include "SensorFloatValue.h"
#include "SensorValue.h"
#include <iostream>

namespace Sensors
{

SensorsValuesProcessor::SensorsValuesProcessor()
{
	m_threadStarted = false;
	m_valuesQueue.clear();
	m_sensorsSettings = NULL;
}

SensorsValuesProcessor::~SensorsValuesProcessor()
{
}

void SensorsValuesProcessor::add(const SensorValue& value)
{
	m_valuesQueue.push_back(value);
}

void SensorsValuesProcessor::setSensorSettings(
		const SensorFloatSettings& settings)
{

}

void SensorsValuesProcessor::doWork()
{

}

void SensorsValuesProcessor::p_processingThread()
{
	for (;;)
	{
		if (m_valuesQueue.size() > 0)
		{
			std::cout << m_valuesQueue[0].getTagName();
		}
	}
}

void SensorsValuesProcessor::p_processSensorValue(SensorValue *value)
{
	SensorFloatValue *fvalue = dynamic_cast<SensorFloatValue*>(value);
	if (fvalue)
	{
		std::cout << "Success convert to SFV from SV" << std::endl;
	}
	else
	{
		std::cerr << "Cannot convert SensorValue" << std::endl;
	}

}

} /* namespace Sensors */
