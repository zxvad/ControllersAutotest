/*
 * SCADAEventMessageFloat.h
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#ifndef SCADAEVENTMESSAGEFLOAT_H_
#define SCADAEVENTMESSAGEFLOAT_H_

#include "SCADAEventMessage.h"

namespace SCADAEvents
{

class SCADAEventMessageFloat: public SCADAEvents::SCADAEventMessage
{
public:
	SCADAEventMessageFloat(const char *A_tagName, const DateTime A_date, const UrgentValue urgent,
			const float A_value, const float A_minLimit, const float A_maxLimit);
	float getMaxLimit() const;
	float getMinLimit() const;
	float getValue() const;

private:
	float m_value;
	float m_minLimit;
	float m_maxLimit;
};

} /* namespace SCADAEvents */
#endif /* SCADAEVENTMESSAGEFLOAT_H_ */
