/*
 * TaggedMessage.cpp
 *
 *  Created on: 27.01.2014
 *      Author: timon
 */

#include "TaggedMessage.h"
#include <cstring>

namespace TagsProcessorSystem
{

TaggedMessage::TaggedMessage()
{
	resetTag();
	resetMsg();
}

TaggedMessage::~TaggedMessage()
{
	resetTag();
	resetMsg();
}

void TaggedMessage::setTag(const char* body, const uint length)
{
	resetTag();

	m_tag = new char[length];
	m_tagLen = length;

	strncpy(m_tag,body,length);
}

uint TaggedMessage::getTag(char* body, const uint maxLength)
{
	uint actualLength = std::min(maxLength, m_tagLen);
	strncpy(body, m_tag, actualLength);
	return actualLength;
}

void TaggedMessage::setMsg(const char* body, const uint length)
{
	resetMsg();

	m_msg = new char[length];
	m_msgLen = length;

	strncpy(m_msg,body,length);
}

uint TaggedMessage::getMsg(char* body, const uint maxLength)
{
	uint actualLength = std::min(maxLength, m_msgLen);
	strncpy(body, m_msg, actualLength);
	return actualLength;
}

void TaggedMessage::resetTag()
{
	if (m_tag != NULL){
		delete [] m_tag;
		m_tag = NULL;
		m_tagLen = 0;
	}
}

void TaggedMessage::resetMsg()
{
	if (m_msg != NULL){
		delete [] m_msg;
		m_msg = NULL;
		m_msgLen = 0;
	}
}
}/* namespace TagsProcessor */
