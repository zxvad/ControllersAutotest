/*
 * SCADAMessageIntTest.h
 *
 *  Created on: 19.12.2012
 *      Author: timon
 */

#ifndef SCADAMESSAGEINTTEST_H_
#define SCADAMESSAGEINTTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>


namespace SCADAEventsTests
{

class SCADAMessageIntTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(SCADAMessageIntTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST(InvalidMinMaxCreateTest);
	CPPUNIT_TEST_SUITE_END();
public:
	SCADAMessageIntTest() {};
	void setUp() {};
	void tearDown() {};

protected:
	void CreateTest();
	void InvalidMinMaxCreateTest();
};

} /* namespace SCADAEventsTests */
#endif /* SCADAMESSAGEINTTEST_H_ */
