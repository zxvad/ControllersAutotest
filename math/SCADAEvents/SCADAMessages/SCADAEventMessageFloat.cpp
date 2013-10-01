/*
 * SCADAEventMessageFloat.cpp
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#include "SCADAEventMessageFloat.h"
#include "SCADAException.h"

namespace SCADAEvents
{

SCADAEventMessageFloat::SCADAEventMessageFloat(const char* tagName,
		const DateTime date, const UrgentValue urgent, const float value,
		const float A_minLimit, const float A_maxLimit) :
		SCADAEventMessage(tagName, date, urgent)
{
	if (A_minLimit < A_maxLimit)
	{
		m_minLimit = A_minLimit;
		m_maxLimit = A_maxLimit;
	}
	else
	{
		// TODO: need replace by correct action
		m_minLimit = A_maxLimit;
		m_maxLimit = A_minLimit;
	}

	m_value = value; // TODO: need check value and do something if value not in limits
}

float SCADAEventMessageFloat::getMaxLimit() const
{
	return m_maxLimit;
}

float SCADAEventMessageFloat::getMinLimit() const
{
	return m_minLimit;
}

float SCADAEventMessageFloat::getValue() const
{
	return m_value;
}

}/* namespace SCADAEvents */
