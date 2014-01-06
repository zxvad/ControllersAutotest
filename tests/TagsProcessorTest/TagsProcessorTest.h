/*
 * TagsProcessorTest.h
 *
 *  Created on: 06.01.2014
 *      Author: timon
 */

#ifndef TAGSPROCESSORTEST_H_
#define TAGSPROCESSORTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace TagsProcessorTesting
{

class TagsProcessorTest: public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(TaggedMessageTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST_SUITE_END();
public:
	TagsProcessorTest(){};
	void setUp() {};
	void tearDown() {};

protected:
	void CreateTest();
};

} /* namespace TagsProcessorTesting */
#endif /* TAGSPROCESSORTEST_H_ */
