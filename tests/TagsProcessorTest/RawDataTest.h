/*
 * RawDataTest.h
 *
 *  Created on: 24.12.2013
 *      Author: timon
 */

#ifndef RAWDATATEST_H_
#define RAWDATATEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace TagsProcessorTesting
{

class RawDataTest: public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(RawDataTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST_SUITE_END();
public:
	RawDataTest(){};
	void setUp() {};
	void tearDown() {};

protected:
	void CreateTest();
};

} /* namespace TagsProcessorTest */
#endif /* RAWDATATEST_H_ */
