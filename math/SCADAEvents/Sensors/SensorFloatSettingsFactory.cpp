/*
 * SensorFloatSettingsFactory.cpp
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#include "SensorFloatSettingsFactory.h"
#include "../Utils.h"
#include <fstream>
#include <exception>
#include <cstdlib>
#include <vector>

namespace Sensors
{

SensorFloatSettingsFactory::SensorFloatSettingsFactory()
{

}

SensorSettings* SensorFloatSettingsFactory::getSettings(
		const char tagName[]) const
{
	std::string tag(tagName);
	if (m_settingsBase.find(tag) != m_settingsBase.end())
		return m_settingsBase.at(tag);
	return new SensorFloatSettings(tagName, 0, 0, 0, 0);
}

void SensorFloatSettingsFactory::loadSettingsBase(std::string fileName)
{
	std::ifstream f(fileName.c_str());
	std::string line;
	std::vector<std::string> params;
	if (f.is_open())
	{
		while (f.good())
		{
			getline(f, line);
			params = Utils::split(line, ';');
			if (params.size() == 5)
			{
				float minW = atof(params[1].c_str());
				float maxW = atof(params[2].c_str());
				float minA = atof(params[3].c_str());
				float maxA = atof(params[4].c_str());

				m_settingsBase[params[0]] = new SensorFloatSettings(
						params[0].c_str(), minW, maxW, minA, maxA);
			}
		}
		f.close();
	}
	else
	{
		throw new std::ios_base::failure("Can't open file: " + fileName);
	}
}

} /* namespace Sensors */
