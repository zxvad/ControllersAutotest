/*
 * AbstractDatebaseDrevirTest.h
 *
 *  Created on: 29 марта 2014 г.
 *      Author: Вилсер
 */

#ifndef ABSTRACTDATEBASEDREVIRTEST_H_
#define ABSTRACTDATEBASEDREVIRTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace BDdriverTest {

class AbstractDatebaseDrevirTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(FacadeBDTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST(InvalidperformSQLTest);
	CPPUNIT_TEST(InvalidSaveMessageTest);
	CPPUNIT_TEST(InvalidSaveErrorMessageTest);
	CPPUNIT_TEST_SUITE_END();

public:
	AbstractDatebaseDrevirTest() {};

private:
	void CreateTest();
	void InvalidperformSQLTest();
	void InvalidSaveMessageTest();
	void InvalidSaveErrorMessageTest();
};

} /* namespace BDdriverTest */

#endif /* ABSTRACTDATEBASEDREVIRTEST_H_ */
