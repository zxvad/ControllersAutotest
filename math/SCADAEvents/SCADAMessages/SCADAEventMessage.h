/*
 * ScadaEventMessage.h
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#ifndef SCADAEVENTMESSAGE_H_
#define SCADAEVENTMESSAGE_H_

#include "../DateTime.h"
#include "../GlobalConst.h"

namespace SCADAEvents
{

enum UrgentValue{Warning, Alarm};

class SCADAEventMessage
{
public:
	SCADAEventMessage(const char *tagName, const DateTime date, const UrgentValue urgent);
	virtual ~SCADAEventMessage();
	DateTime getDate() const;
	const char* getTagName() const;
	UrgentValue getUrgentValue() const;

private:
	DateTime m_date;
	UrgentValue m_urgentValue;
	char m_tagName[GlobalConst::MAX_TAG_LENGTH];
};

} /* namespace SCADAEvents */
#endif /* SCADAEVENTMESSAGE_H_ */
