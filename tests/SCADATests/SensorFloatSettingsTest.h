/*
 * SensorFloatSettingsTest.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORFLOATSETTINGSTEST_H_
#define SENSORFLOATSETTINGSTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace SensorsTest
{

class SensorFloatSettingsTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(SensorFloatSettingsTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST_SUITE_END();
public:
	SensorFloatSettingsTest(){};
	void setUp() {};
	void tearDown() {};

protected:
	void CreateTest();
};

} /* namespace SensorsTest */
#endif /* SENSORFLOATSETTINGSTEST_H_ */
