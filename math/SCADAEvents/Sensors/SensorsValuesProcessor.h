/*
 * SensorsValuesProcessor.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORSVALUESPROCESSOR_H_
#define SENSORSVALUESPROCESSOR_H_

#include <vector>
#include "SensorValue.h"
#include "SensorFloatSettings.h"

namespace Sensors
{

class SensorsValuesProcessor
{
public:
	SensorsValuesProcessor();
	~SensorsValuesProcessor();
	void add(const SensorValue &value);
	void setSensorSettings(const SensorFloatSettings &settings);
	void doWork();

private:
	bool m_threadStarted;
	std::vector<SensorValue> m_valuesQueue;
	SensorFloatSettings *m_sensorsSettings;

	void p_processingThread();
	void p_processSensorValue(SensorValue *value);
};

} /* namespace Sensors */
#endif /* SENSORSVALUESPROCESSOR_H_ */
