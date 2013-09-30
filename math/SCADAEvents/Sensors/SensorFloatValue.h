/*
 * SensorFloatValue.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORFLOATVALUE_H_
#define SENSORFLOATVALUE_H_

#include "SensorValue.h"

namespace Sensors
{

class SensorFloatValue: public Sensors::SensorValue
{
public:
	SensorFloatValue(const char *tagName, const float value);
	virtual ~SensorFloatValue() {};
	virtual float getValue() const;

private:
	float m_value;
};

}/* namespace Sensors */
#endif /* SENSORFLOATVALUE_H_ */
