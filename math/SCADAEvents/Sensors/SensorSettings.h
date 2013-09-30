/*
 * SensorSettings.h
 *
 *  Created on: 17.01.2013
 *      Author: timon
 */

#ifndef SENSORSETTINGS_H_
#define SENSORSETTINGS_H_

#include "../GlobalConst.h"

namespace Sensors
{

class SensorSettings
{
public:
	SensorSettings(const char tagName[]);
	const char* getTagName() const;

private:
	char m_tagName[GlobalConst::MAX_TAG_LENGTH];
};

} /* namespace Sensors */
#endif /* SENSORSETTINGS_H_ */
