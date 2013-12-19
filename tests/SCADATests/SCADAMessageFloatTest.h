/*
 * SCADAMessageFloatTest.h
 *
 *  Created on: 24.12.2012
 *      Author: timon
 */

#ifndef SCADAMESSAGEFLOATTEST_H_
#define SCADAMESSAGEFLOATTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace SCADAEventsTests
{

class SCADAMessageFloatTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(SCADAMessageFloatTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST(InvalidMinMaxCreateTest);
	CPPUNIT_TEST_SUITE_END();
public:
	SCADAMessageFloatTest() {};
	void setUp() {};
	void tearDown() {};

protected:
	void CreateTest();
	void InvalidMinMaxCreateTest();
};

} /* namespace SCADAEventsTests */
#endif /* SCADAMESSAGEFLOATTEST_H_ */
