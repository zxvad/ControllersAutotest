/*
 * SensorSettingsTest.cpp
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#include "SensorSettingsTest.h"
#include "../../math/SCADAEvents/Sensors/SensorSettings.h"
#include "../../math/SCADAEvents/Utils.h"

namespace SensorsTest
{

void SensorsTest::SensorSettingsTest::CreateTest()
{
	using namespace Sensors;
	char tagName[] = "testTag";
	SensorSettings *target = new SensorSettings(tagName);

	char actualTagName[GlobalConst::MAX_TAG_LENGTH];
	Utils::strlcpy(actualTagName, target->getTagName(),
			GlobalConst::MAX_TAG_LENGTH);
	CPPUNIT_ASSERT(
			strncmp(tagName, actualTagName, GlobalConst::MAX_TAG_LENGTH) == 0);

	delete target;
}

}/* namespace SensorsTest */
