/*
 * FacadeBDTest.h
 *
 *  Created on: 29 марта 2014 г.
 *      Author: Вилсер
 */

#ifndef FACADEBDTEST_H_
#define FACADEBDTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace BDdriverTest {

class FacadeBDTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(FacadeBDTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST(InvalidmapTest);
	CPPUNIT_TEST(InvalidNewValueTest);
	CPPUNIT_TEST(InvalidNewErrorTest);
	CPPUNIT_TEST_SUITE_END();
public:
	FacadeBDTest() {};

private:
	void CreateTest();
	void InvalidmapTest();
	void InvalidNewValueTest();
	void InvalidNewErrorTest();
};

} /* namespace BDdriverTest */

#endif /* FACADEBDTEST_H_ */
