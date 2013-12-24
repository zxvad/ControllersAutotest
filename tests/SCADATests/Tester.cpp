/*
 * Tester.cpp
 *
 *  Created on: 24.12.2012
 *      Author: timon
 */

#include "Tester.h"
#include "SCADAMessageFloatTest.h"
#include "SCADAMessageIntTest.h"
#include "SCADAMessageTest.h"
#include "SensorValueTest.h"
#include "SensorFloatValueTest.h"
#include "SensorSettingsTest.h"
#include "SensorFloatSettingsTest.h"

Tester::Tester()
{
	using namespace SCADAEventsTests;
	using namespace SensorsTest;
	CPPUNIT_TEST_SUITE_REGISTRATION(SCADAMessageFloatTest);
	CPPUNIT_TEST_SUITE_REGISTRATION(SCADAMessageIntTest);
	CPPUNIT_TEST_SUITE_REGISTRATION(SCADAMessageTest);
	CPPUNIT_TEST_SUITE_REGISTRATION(SensorValueTest);
	CPPUNIT_TEST_SUITE_REGISTRATION(SensorFloatValueTest);
	CPPUNIT_TEST_SUITE_REGISTRATION(SensorFloatSettingsTest);
	CPPUNIT_TEST_SUITE_REGISTRATION(SensorSettingsTest);
}

void Tester::startAllTests()
{
	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestFactoryRegistry &registry =
			CppUnit::TestFactoryRegistry::getRegistry();
	runner.addTest(registry.makeTest());
	runner.run();
}
