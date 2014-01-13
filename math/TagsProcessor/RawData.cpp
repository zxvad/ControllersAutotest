/*
 * RawData.cpp
 *
 *  Created on: 13.01.2014
 *      Author: timon
 */

#include "RawData.h"

namespace TagsProcessorTesting
{

RawData::RawData()
{
	// TODO Auto-generated constructor stub

}

RawData::~RawData()
{
	// TODO Auto-generated destructor stub
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
	m_opcDescription = opcDescription;}

} /* namespace TagsProcessorTesting */
