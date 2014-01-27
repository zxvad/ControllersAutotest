/*
 * RawData.h
 *
 *  Created on: 13.01.2014
 *      Author: timon
 */

#ifndef RAWDATA_H_
#define RAWDATA_H_

#include <string>

namespace TagsProcessorSystem
{

class RawData
{
public:
	RawData();
	virtual ~RawData();
	void setBody(const char* body, const uint length);
	uint getBody(char *body, const uint maxLength);
	int getId() const;
	void setId(int id);
	std::string getOpcDescription() const;
	void setOpcDescription(std::string opcDescription);

private:
	int m_id;
	std::string m_opcDescription;
};

} /* namespace TagsProcessorTesting */
#endif /* RAWDATA_H_ */
