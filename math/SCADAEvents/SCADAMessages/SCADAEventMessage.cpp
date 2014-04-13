/*
 * ScadaEventMessage.cpp
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#include "SCADAEventMessage.h"
#include "SCADAException.h"
#include "../Utils.h"

namespace SCADAEvents
{

SCADAEventMessage::SCADAEventMessage(const char *tagName,
		const DateTime date, const UrgentValue urgent)
{
	if (strlen(tagName) < GlobalConst::MAX_TAG_LENGTH)
	{
		Utils::strlcpy(m_tagName, tagName, GlobalConst::MAX_TAG_LENGTH);
	}
	else
	{
		// TODO: need replace by correct action
		Utils::strlcpy(m_tagName, "defName", strlen("defName"));
	}

	m_date = date;
	m_urgentValue = urgent;
}

SCADAEventMessage::~SCADAEventMessage()
{

}

DateTime SCADAEventMessage::getDate() const
{
	return m_date;
}

const char* SCADAEventMessage::getTagName() const
{
	return m_tagName;
}

UrgentValue SCADAEventMessage::getUrgentValue() const
{
	return m_urgentValue;
}

} /* namespace SCADAEvents */
