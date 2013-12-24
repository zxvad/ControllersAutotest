/*
 * SCADAMessageFloatTest.cpp
 *
 *  Created on: 24.12.2012
 *      Author: timon
 */

#include "SCADAMessageFloatTest.h"
#include "../../math/SCADAEvents/SCADAMessages/SCADAEventMessageFloat.h"
#include "../../math/SCADAEvents/Utils.h"
#include "../../math/SCADAEvents/GlobalConst.h"

namespace SCADAEventsTests
{

void SCADAMessageFloatTest::CreateTest()
{
	using namespace SCADAEvents;
	char tagName[] = "testTag";
	DateTime dt;
	UrgentValue urgent = SCADAEvents::Warning;
	const double delta = 0.000001;
	double value = 10.134;
	double minLimit = 0.421;
	double maxLimit = 20.124;
	SCADAEventMessageFloat *target = new SCADAEventMessageFloat(tagName, dt, urgent,
			value, minLimit, maxLimit);

	char actualTagName[GlobalConst::MAX_TAG_LENGTH];
	strncpy(actualTagName, target->getTagName(), GlobalConst::MAX_TAG_LENGTH);
	CPPUNIT_ASSERT(strncmp(tagName, actualTagName, GlobalConst::MAX_TAG_LENGTH) == 0);
	CPPUNIT_ASSERT(target->getDate() == dt);
	CPPUNIT_ASSERT(target->getUrgentValue() == urgent);
	CPPUNIT_ASSERT(Utils::fabs(target->getValue() - value) < delta);
	CPPUNIT_ASSERT(Utils::fabs(target->getMinLimit() - minLimit) < delta);
	CPPUNIT_ASSERT(Utils::fabs(target->getMaxLimit() - maxLimit) < delta);

	delete target;
}

void SCADAMessageFloatTest::InvalidMinMaxCreateTest()
{
	using namespace SCADAEvents;
	DateTime dt;
	UrgentValue urgent = SCADAEvents::Warning;
	double value = 10;
	double minLimit = 20;
	double maxLimit = 0;
	SCADAEventMessageFloat *target = new SCADAEventMessageFloat("testTag", dt, urgent,
			value, minLimit, maxLimit);

	CPPUNIT_ASSERT(target->getUrgentValue() == urgent);
	CPPUNIT_ASSERT(target->getValue() == value);
	CPPUNIT_ASSERT(target->getMinLimit() == maxLimit);
	CPPUNIT_ASSERT(target->getMaxLimit() == minLimit);

	delete target;
}
}
/* namespace SCADAEventsTests */
