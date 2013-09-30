/*
 * SensorFloatSettingsFactory.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORFLOATSETTINGSFACTORY_H_
#define SENSORFLOATSETTINGSFACTORY_H_

#include "SensorSettingsAbstractFactory.h"
#include "SensorFloatSettings.h"
#include <map>
#include <string>

namespace Sensors
{

class SensorFloatSettingsFactory: public Sensors::SensorSettingsAbstractFactory
{
public:
	SensorFloatSettingsFactory();
	virtual ~SensorFloatSettingsFactory(){};
	virtual SensorSettings* getSettings(const char tagName[]) const;
	void loadSettingsBase(std::string fileName);

private:
	std::map<std::string, SensorFloatSettings*> m_settingsBase;
	std::string m_baseFileName;
};

} /* namespace Sensors */
#endif /* SENSORFLOATSETTINGSFACTORY_H_ */
