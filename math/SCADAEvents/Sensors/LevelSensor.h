/*
 * LevelSensor.h
 *
 *  Created on: 02.03.2014
 *      Author: timon
 */

#ifndef LEVELSENSOR_H_
#define LEVELSENSOR_H_

#include "SensorFloatValue.h"

namespace Sensors
{

class LevelSensor: public SensorFloatValue
{
public:
	LevelSensor(const char *tagName, const float value);
	virtual ~LevelSensor();
};

} /* namespace Sensors */
#endif /* LEVELSENSOR_H_ */
