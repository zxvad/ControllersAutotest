/*
 * SCADAMessageTest.cpp
 *
 *  Created on: 24.12.2012
 *      Author: timon
 */

#include "SCADAMessageTest.h"
#include "../../math/SCADAEvents/SCADAMessages/SCADAEventMessage.h"
#include "../../math/SCADAEvents/GlobalConst.h"
#include "../../math/SCADAEvents/Utils.h"
#include <string.h>

namespace SCADAEventsTests
{

void SCADAEventsTests::SCADAMessageTest::CreateTest()
{
    using namespace SCADAEvents;
    char tagName[] = "testTag";
    DateTime dt;
    UrgentValue urgent = SCADAEvents::Warning;
    SCADAEventMessage *target = new SCADAEventMessage(tagName, dt, urgent);

    char actualTagName[GlobalConst::MAX_TAG_LENGTH];
    Utils::strlcpy(actualTagName, target->getTagName(), GlobalConst::MAX_TAG_LENGTH);
    CPPUNIT_ASSERT(strncmp(tagName, actualTagName, GlobalConst::MAX_TAG_LENGTH) == 0);
    CPPUNIT_ASSERT(target->getDate() == dt);
    CPPUNIT_ASSERT(target->getUrgentValue() == urgent);

    delete target;
}
}


/* namespace SCADAEventsTests */
