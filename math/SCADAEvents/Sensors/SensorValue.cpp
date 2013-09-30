/*
 * SensorValue.cpp
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#include "SensorValue.h"
#include "../Utils.h"

namespace Sensors
{

Sensors::SensorValue::SensorValue(const char* tagName)
{
	Utils::strlcpy(m_tagName, tagName, GlobalConst::MAX_TAG_LENGTH);
}

const char* SensorValue::getTagName() const
{
	return m_tagName;
}


}/* namespace Sensors */

