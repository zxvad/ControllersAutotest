/*
 * SensorFloatValueTest.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORFLOATVALUETEST_H_
#define SENSORFLOATVALUETEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Sensors/SensorFloatValue.h"
#include "../Utils.h"

namespace SensorsTest
{

class SensorFloatValueTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(SensorFloatValueTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST_SUITE_END();
public:
	SensorFloatValueTest(){};
	void setUp() {};
	void tearDown() {};

protected:
	void CreateTest();
};

} /* namespace Sensors */
#endif /* SENSORFLOATVALUETEST_H_ */
