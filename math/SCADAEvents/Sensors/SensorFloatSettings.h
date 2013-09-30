/*
 * SensorsSettings.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORSSETTINGS_H_
#define SENSORSSETTINGS_H_

#include "../GlobalConst.h"
#include "SensorSettings.h"

namespace Sensors
{

class SensorFloatSettings : public SensorSettings
{
public:
	SensorFloatSettings(const char *m_tagName, const float minWarning,
			const float maxWarning, const float minAlarm, const float maxAlarm);
	float getMaxAlarmValue() const;
	void setMaxAlarmValue(float maxAlarmValue);
	float getMaxWarningValue() const;
	void setMaxWarningValue(float maxWarningValue);
	float getMinAlarmValue() const;
	void setMinAlarmValue(float minAlarmValue);
	float getMinWarningValue() const;
	void setMinWarningValue(float minWarningValue);
private:
	float m_minWarningValue;
	float m_maxWarningValue;
	float m_minAlarmValue;
	float m_maxAlarmValue;

};

} /* namespace Sensors */
#endif /* SENSORSSETTINGS_H_ */
