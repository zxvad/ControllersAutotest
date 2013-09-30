/*
 * DateTime.cpp
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#include "DateTime.h"

DateTime::DateTime()
{
	// TODO Auto-generated constructor stub
	m_time = time(NULL);
}

DateTime::~DateTime()
{
	// TODO Auto-generated destructor stub
}

bool DateTime::operator ==(const DateTime& other) const
{
	return m_time == other.m_time;
}


