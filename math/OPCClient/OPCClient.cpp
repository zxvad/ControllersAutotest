/*
 * OPCClient.cpp
 *
 *  Created on: 23.02.2014
 *      Author: timon
 */

#include "OPCClient.h"

namespace OPCClient
{

OPCClient::OPCClient(NewDataReceivedCallback newDataReceived)
{
	m_onNewDataReceived = newDataReceived;
}

OPCClient::~OPCClient()
{

}

} /* namespace OPCClient */
