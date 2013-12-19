/*
 * SensorSettingsTest.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORSETTINGSTEST_H_
#define SENSORSETTINGSTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace SensorsTest
{

class SensorSettingsTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(SensorSettingsTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST_SUITE_END();
public:
	SensorSettingsTest(){};
	void setUp() {};
	void tearDown() {};

protected:
	void CreateTest();
};

} /* namespace SensorsTest */
#endif /* SENSORSETTINGSTEST_H_ */
