/*
 * TemperatureSensor.h
 *
 *  Created on: 02.03.2014
 *      Author: timon
 */

#ifndef TEMPERATURESENSOR_H_
#define TEMPERATURESENSOR_H_

#include "SensorFloatValue.h"

namespace Sensors
{

class TemperatureSensor: public Sensors::SensorFloatValue
{
public:
	TemperatureSensor(const char *tagName, const float value);
	virtual ~TemperatureSensor();
};

} /* namespace Sensors */
#endif /* TEMPERATURESENSOR_H_ */
