/*
 * SCADAException.h
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#ifndef SCADAEXCEPTION_H_
#define SCADAEXCEPTION_H_

#include <string.h>

namespace SCADAEvents
{

static const size_t MAX_EXCEPTION_MSG_LENGTH = 256;

class SCADAException
{
public:
	SCADAException(const char *msg);
	virtual ~SCADAException() throw () {};
	const char* getMsg() const;

private:
	char m_msg[MAX_EXCEPTION_MSG_LENGTH];
};

} /* namespace SCADAEvents */
#endif /* SCADAEXCEPTION_H_ */
