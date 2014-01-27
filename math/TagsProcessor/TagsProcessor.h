/*
 * TagsProcessor.h
 *
 *  Created on: 27.01.2014
 *      Author: timon
 */

#ifndef TAGSPROCESSOR_H_
#define TAGSPROCESSOR_H_

#include <map>

namespace TagsProcessorSystem
{

class TagsProcessor
{
public:
	TagsProcessor();
	virtual ~TagsProcessor();
	void processRawData(const RawData &rd);
	void loadTagsCodes(const std::map<int, char> tags);

private:
	void parseRawMessage(const RawData &rd);
};

} /* namespace TagsProcessorSystem */
#endif /* TAGSPROCESSOR_H_ */
