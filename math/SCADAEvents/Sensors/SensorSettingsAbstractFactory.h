/*
 * SensorSettingsFactory.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORSETTINGSFACTORY_H_
#define SENSORSETTINGSFACTORY_H_

#include "SensorSettings.h"

namespace Sensors
{

class SensorSettingsAbstractFactory
{
public:
	SensorSettingsAbstractFactory(){};
	virtual ~SensorSettingsAbstractFactory() {};
	virtual SensorSettings* getSettings(const char tagName[]) const = 0;
};

} /* namespace Sensors */
#endif /* SENSORSETTINGSFACTORY_H_ */
