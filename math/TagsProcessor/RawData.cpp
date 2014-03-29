/*
 * RawData.cpp
 *
 *  Created on: 13.01.2014
 *      Author: timon
 */

#include "RawData.h"
#include <cstring>

namespace TagsProcessorSystem
{

RawData::RawData()
{
	resetBody();
}

RawData::~RawData()
{
	resetBody();
}

int RawData::getId() const
{
	return m_id;
}

void RawData::setId(int id)
{
	m_id = id;
}

std::string RawData::getOpcDescription() const
{
	return m_opcDescription;
}

void RawData::setOpcDescription(std::string opcDescription)
{
	m_opcDescription = opcDescription;
}


void TagsProcessorSystem::RawData::setBody(const char* body, const uint length)
{
	resetBody();

	m_body = new char[length];
	m_bodyLength = length;

	strncpy(m_body,body,length);
}

uint TagsProcessorSystem::RawData::getBody(char* body, const uint maxLength)
{
	uint actualLength = std::min(maxLength, m_bodyLength);
	strncpy(body, m_body, actualLength);
	return actualLength;
}

void RawData::resetBody()
{
	if (m_body != NULL){
		delete [] m_body;
		m_body = NULL;
		m_bodyLength = 0;
	}
}
}/* namespace TagsProcessorTesting */
