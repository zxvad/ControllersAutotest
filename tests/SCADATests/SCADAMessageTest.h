/*
 * SCADAMessageTest.h
 *
 *  Created on: 24.12.2012
 *      Author: timon
 */

#ifndef SCADAMESSAGETEST_H_
#define SCADAMESSAGETEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace SCADAEventsTests
{

class SCADAMessageTest  : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(SCADAMessageTest);
    CPPUNIT_TEST(CreateTest);
    CPPUNIT_TEST_SUITE_END();

public:
    SCADAMessageTest() {}
    void setUp() {}
    void tearDown() {}
    void CreateTest();
};

} /* namespace SCADAEventsTests */
#endif /* SCADAMESSAGETEST_H_ */
