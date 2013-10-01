/*
 * SCADAException.cpp
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#include "SCADAException.h"
#include "../Utils.h"

namespace SCADAEvents
{

SCADAException::SCADAException(const char *msg)
{
	Utils::strlcpy(m_msg, msg, SCADAEvents::MAX_EXCEPTION_MSG_LENGTH);

}

const char* SCADAException::getMsg() const
{
	return m_msg;
}

} /* namespace SCADAEvents */
