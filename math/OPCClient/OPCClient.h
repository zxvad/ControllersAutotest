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

class OPCClient
{
public:
	OPCClient((*newDataReceived)(const TagsProcessorSystem::RawData rd));
	virtual ~OPCClient();
	void connectToServer(const ServerParams sp);

private:


	void pingLoop();
};

} /* namespace OPCClient */
#endif /* OPCCLIENT_H_ */
