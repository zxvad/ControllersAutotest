/*
 * SCADAEventMessageInt.cpp
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#include "SCADAEventMessageInt.h"
#include "SCADAException.h"

namespace SCADAEvents
{

SCADAEvents::SCADAEventMessageInt::SCADAEventMessageInt(const char* tagName,
		const DateTime date, const UrgentValue urgent, const int value, const int minLimit,
		const int maxLimit) :
		SCADAEventMessage(tagName, date, urgent)
{
	if (minLimit < maxLimit)
	{
		m_minLimit = minLimit;
		m_maxLimit = maxLimit;
	}
	else
	{
		// TODO: need replace by correct action
		m_minLimit = maxLimit;
		m_maxLimit = minLimit;
	}

	m_value = value; // need check value and do something if value not in limits
}

int SCADAEventMessageInt::getMaxLimit() const
{
	return m_maxLimit;
}

int SCADAEventMessageInt::getMinLimit() const
{
	return m_minLimit;
}

int SCADAEventMessageInt::getValue() const
{
	return m_value;
}

}/* namespace SCADAEvents */

