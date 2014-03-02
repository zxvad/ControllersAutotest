/*
 * SCADAMessageIntTest.cpp
 *
 *  Created on: 19.12.2012
 *      Author: timon
 */

#include "SCADAMessageIntTest.h"
#include "../../math/SCADAEvents/SCADAMessages/SCADAEventMessageInt.h"
#include "../../math/SCADAEvents/GlobalConst.h"
#include "../../math/SCADAEvents/DateTime.h"
#include <string.h>

namespace SCADAEventsTests
{

void SCADAEventsTests::SCADAMessageIntTest::CreateTest()
{
	using namespace SCADAEvents;
	char tagName[] = "testTag";
	DateTime dt;
	UrgentValue urgent = SCADAEvents::Warning;
	int value = 10;
	int minLimit = 0;
	int maxLimit = 20;
	SCADAEventMessageInt *target = new SCADAEventMessageInt(tagName, dt, urgent,
			value, minLimit, maxLimit);

	char actualTagName[GlobalConst::MAX_TAG_LENGTH];
	strncpy(actualTagName, target->getTagName(), GlobalConst::MAX_TAG_LENGTH);
	CPPUNIT_ASSERT(
			strncmp(tagName, actualTagName, GlobalConst::MAX_TAG_LENGTH) == 0);
	CPPUNIT_ASSERT(target->getDate() == dt);
	CPPUNIT_ASSERT(target->getUrgentValue() == urgent);
	CPPUNIT_ASSERT(target->getValue() == value);
	CPPUNIT_ASSERT(target->getMinLimit() == minLimit);
	CPPUNIT_ASSERT(target->getMaxLimit() == maxLimit);

	delete target;
}

void SCADAMessageIntTest::InvalidMinMaxCreateTest()
{
	using namespace SCADAEvents;
	DateTime dt;
	UrgentValue urgent = SCADAEvents::Warning;
	int value = 10;
	int minLimit = 20;
	int maxLimit = 0;
	SCADAEventMessageInt *target = new SCADAEventMessageInt("testTag", dt,
			urgent, value, minLimit, maxLimit);

	CPPUNIT_ASSERT(target->getUrgentValue() == urgent);
	CPPUNIT_ASSERT(target->getValue() == value);
	CPPUNIT_ASSERT(target->getMinLimit() == maxLimit);
	CPPUNIT_ASSERT(target->getMaxLimit() == minLimit);

	delete target;
}
}
/* namespace SCADAEventsTests */
