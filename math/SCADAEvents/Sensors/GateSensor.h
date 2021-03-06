/*
 * GateSensor.h
 *
 *  Created on: 02.03.2014
 *      Author: timon
 */

#ifndef GATESENSOR_H_
#define GATESENSOR_H_

#include "SensorFloatValue.h"

namespace Sensors
{

class GateSensor: public Sensors::SensorFloatValue
{
public:
	GateSensor(const char *tagName, const float value);
	virtual ~GateSensor();
	void beginOpening();
	void beginClosing();
	void stopCurrentOperation();
	bool isOpen()const;
	bool isClose()const;
	void ecuCrashed();

private:
	typedef enum {INVALID = 0, UNDEFINED, STOPPED, OPENING, OPEN, CLOSING, CLOSED} GateState;
	GateState m_state;
};

} /* namespace Sensors */
#endif /* GATESENSOR_H_ */
