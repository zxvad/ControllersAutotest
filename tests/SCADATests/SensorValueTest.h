/*
 * SensorValueTest.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORVALUETEST_H_
#define SENSORVALUETEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace SensorsTest
{

class SensorValueTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(SensorValueTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST_SUITE_END();
public:
	SensorValueTest(){};
	void setUp() {};
	void tearDown() {};

protected:
	void CreateTest();
};

}
#endif /* SENSORVALUETEST_H_ */
