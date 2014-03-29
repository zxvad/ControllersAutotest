/*
 * OPCClient.h
 *
 *  Created on: 23.02.2014
 *      Author: timon
 */

#ifndef OPCCLIENT_H_
#define OPCCLIENT_H_

#include "ServerParams.h"
#include "../TagsProcessor/RawData.h"

namespace OPCClient
{

typedef void (*NewDataReceivedCallback)(const TagsProcessorSystem::RawData rd);

class OPCClient
{
public:
	OPCClient(NewDataReceivedCallback);
	virtual ~OPCClient();
	void connectToServer(const ServerParams sp);

private:
	void pingLoop();
	NewDataReceivedCallback m_onNewDataReceived;
};

} /* namespace OPCClient */
#endif /* OPCCLIENT_H_ */
