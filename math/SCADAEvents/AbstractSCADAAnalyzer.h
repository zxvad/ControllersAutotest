/*
 * SCADAAnalyzer.h
 *
 *  Created on: 18.04.2014
 *      Author: timon
 */

#ifndef SCADAANALYZER_H_
#define SCADAANALYZER_H_

#include "SCADAMessages/SCADAEventMessage.h"

namespace SCADAEvents
{

class AbstractSCADAAnalyzer
{
public:
	AbstractSCADAAnalyzer();
	virtual ~AbstractSCADAAnalyzer();

	SCADAEventMessage* produce() = 0;
};

} /* namespace Sensors */
#endif /* SCADAANALYZER_H_ */
