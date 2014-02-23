/*
 * ServerParams.cpp
 *
 *  Created on: 23.02.2014
 *      Author: timon
 */

#include "ServerParams.h"

namespace OPCClient
{

ServerParams::ServerParams()
{
	// TODO Auto-generated constructor stub

}

ServerParams::~ServerParams()
{
	// TODO Auto-generated destructor stub
}

std::string ServerParams::getAddress() const
{
	return m_address;
}

void ServerParams::setAddress(std::string address)
{
	m_address = address;
}

uint ServerParams::getPort() const
{
	return m_port;
}

void ServerParams::setPort(uint port)
{
	m_port = port;}

} /* namespace OPCClient */
