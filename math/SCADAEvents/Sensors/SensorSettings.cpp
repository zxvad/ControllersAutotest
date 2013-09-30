/*
 * SensorSettings.cpp
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#include "SensorSettings.h"
#include "../Utils.h"

namespace Sensors
{

const char* SensorSettings::getTagName() const
{
	return m_tagName;
}

Sensors::SensorSettings::SensorSettings(const char tagName[])
{
	Utils::strlcpy(m_tagName, tagName, GlobalConst::MAX_TAG_LENGTH);
}

} /* namespace Sensors */
