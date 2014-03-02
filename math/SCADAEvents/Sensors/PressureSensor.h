/*
 * PressureSensor.h
 *
 *  Created on: 02.03.2014
 *      Author: timon
 */

#ifndef PRESSURESENSOR_H_
#define PRESSURESENSOR_H_

#include "SensorFloatValue.h"

namespace Sensors
{

class PressureSensor: public Sensors::SensorFloatValue
{
public:
	PressureSensor(const char *tagName, const float value);
	virtual ~PressureSensor();
};

} /* namespace Sensors */
#endif /* PRESSURESENSOR_H_ */
