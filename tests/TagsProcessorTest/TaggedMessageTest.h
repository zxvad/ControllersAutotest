/*
 * TaggedMessageTest.h
 *
 *  Created on: 06.01.2014
 *      Author: timon
 */

#ifndef TAGGEDMESSAGETEST_H_
#define TAGGEDMESSAGETEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace TagsProcessorTesting
{

class TaggedMessageTest: public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(TaggedMessageTest);
	CPPUNIT_TEST(CreateTest);
	CPPUNIT_TEST_SUITE_END();
public:
	TaggedMessageTest(){};
	void setUp() {};
	void tearDown() {};

protected:
	void CreateTest();
};

} /* namespace TagsProcessorTest */
#endif /* TAGGEDMESSAGETEST_H_ */
