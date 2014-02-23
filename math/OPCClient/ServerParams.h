/*
 * ServerParams.h
 *
 *  Created on: 23.02.2014
 *      Author: timon
 */

#ifndef SERVERPARAMS_H_
#define SERVERPARAMS_H_

#include <string>

namespace OPCClient
{

class ServerParams
{
public:
	ServerParams();
	virtual ~ServerParams();
	std::string getAddress() const;
	void setAddress(std::string address);
	uint getPort() const;
	void setPort(uint port);

private:
	std::string m_address;
	uint m_port;
};

} /* namespace OPCClient */
#endif /* SERVERPARAMS_H_ */
