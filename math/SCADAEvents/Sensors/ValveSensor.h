/*
 * ValveSensor.h
 *
 *  Created on: 02.03.2014
 *      Author: timon
 */

#ifndef VALVESENSOR_H_
#define VALVESENSOR_H_

#include "SensorFloatValue.h"

namespace Sensors
{

class ValveSensor : public SensorFloatValue
{
public:
	ValveSensor(const char *tagName, const float value);
	virtual ~ValveSensor();

	void beginOpening();
	void beginClosing();
	void stopCurrentOperation();
	float getCurrentOpeningPercent();
	void ecuCrashed();

private:
	typedef enum {INVALID = 0, UNDEFINED, STOPPED, OPENING, OPEN, CLOSING, CLOSED} ValveState;
	ValveState m_state;
};

} /* namespace Sensors */
#endif /* VALVESENSOR_H_ */
