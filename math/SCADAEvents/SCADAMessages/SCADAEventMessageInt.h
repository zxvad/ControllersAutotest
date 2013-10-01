/*
 * SCADAEventMessageInt.h
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#ifndef SCADAEVENTMESSAGEINT_H_
#define SCADAEVENTMESSAGEINT_H_

#include "SCADAEventMessage.h"

namespace SCADAEvents
{

class SCADAEventMessageInt: public SCADAEvents::SCADAEventMessage
{
public:
	SCADAEventMessageInt(const char *A_tagName, const DateTime A_date,
			const UrgentValue urgent, const int A_value, const int A_minLimit,
			const int A_maxLimit);
	int getMaxLimit() const;
	int getMinLimit() const;
	int getValue() const;

private:
	int m_value;
	int m_minLimit;
	int m_maxLimit;
};

} /* namespace SCADAEvents */
#endif /* SCADAEVENTMESSAGEINT_H_ */
