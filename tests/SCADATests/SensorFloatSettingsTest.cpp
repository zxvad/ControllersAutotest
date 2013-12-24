/*
 * SensorFloatSettingsTest.cpp
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#include "SensorFloatSettingsTest.h"
#include "../../math/SCADAEvents/Sensors/SensorFloatSettings.h"
#include "../../math/SCADAEvents/Utils.h"

namespace SensorsTest
{

void SensorsTest::SensorFloatSettingsTest::CreateTest()
{
	using namespace Sensors;
	char tagName[] = "testTag";
	float minW = -12.34;
	float maxW = 12.34;
	float minA = -23.45;
	float maxA = 23.45;
	SensorFloatSettings *target = new SensorFloatSettings(tagName, minW, maxW, minA, maxA);

	char actualTagName[GlobalConst::MAX_TAG_LENGTH];
	Utils::strlcpy(actualTagName, target->getTagName(),
			GlobalConst::MAX_TAG_LENGTH);
	CPPUNIT_ASSERT(
			strncmp(tagName, actualTagName, GlobalConst::MAX_TAG_LENGTH) == 0);
	CPPUNIT_ASSERT(target->getMinWarningValue() == minW);
	CPPUNIT_ASSERT(target->getMaxWarningValue() == maxW);
	CPPUNIT_ASSERT(target->getMinAlarmValue() == minA);
	CPPUNIT_ASSERT(target->getMaxAlarmValue() == maxA);

	delete target;
}
} /* namespace SensorsTest */
