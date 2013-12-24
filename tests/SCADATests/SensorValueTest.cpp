/*
 * SensorValueTest.cpp
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#include "SensorValueTest.h"
#include "../../math/SCADAEvents/Sensors/SensorValue.h"
#include "../../math/SCADAEvents/Utils.h"

namespace SensorsTest
{

void SensorValueTest::CreateTest()
{
	using namespace Sensors;
	char tagName[] = "testTag";
	SensorValue *target = new SensorValue(tagName);

	char actualTagName[GlobalConst::MAX_TAG_LENGTH];
	Utils::strlcpy(actualTagName, target->getTagName(), GlobalConst::MAX_TAG_LENGTH);
	CPPUNIT_ASSERT(strncmp(tagName, actualTagName, GlobalConst::MAX_TAG_LENGTH) == 0);

	delete target;
}

}
