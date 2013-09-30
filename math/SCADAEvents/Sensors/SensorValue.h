/*
 * SensorValue.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORVALUE_H_
#define SENSORVALUE_H_

#include "../GlobalConst.h"

namespace Sensors
{

class SensorValue
{
public:
	SensorValue(const char *tagName);
	virtual ~SensorValue(){};
	virtual const char* getTagName() const;

private:
	char m_tagName[GlobalConst::MAX_TAG_LENGTH];
};

} /* namespace Sensors */
#endif /* SENSORVALUE_H_ */
