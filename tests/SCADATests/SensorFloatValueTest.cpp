/*
 * SensorFloatValueTest.cpp
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#include "SensorFloatValueTest.h"
#include "../../math/SCADAEvents/Sensors/SensorFloatValue.h"
#include "../../math/SCADAEvents//Utils.h"

namespace SensorsTest
{

void SensorFloatValueTest::SensorFloatValueTest::CreateTest()
{
	using namespace Sensors;
	char tagName[] = "testTag";
	const double delta = 0.000001;
	double value = 10.134;
	SensorFloatValue *target = new SensorFloatValue(tagName, value);

	char actualTagName[GlobalConst::MAX_TAG_LENGTH];
	float actualValue = target->getValue();
	Utils::strlcpy(actualTagName, target->getTagName(),
			GlobalConst::MAX_TAG_LENGTH);
	CPPUNIT_ASSERT(
			strncmp(tagName, actualTagName, GlobalConst::MAX_TAG_LENGTH) == 0);
	CPPUNIT_ASSERT(Utils::fabs(actualValue - value) < delta);

	delete target;
}

}

/* namespace Sensors */
